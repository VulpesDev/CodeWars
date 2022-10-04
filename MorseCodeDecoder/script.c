#include <stdio.h>
#include <stdlib.h>

#define Size 55

char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

int	len(char *str)
{
	int result = 0;
	while(*(str++))
		result++;
	return result;
}

char	*append(char *dest, char *src)
{
	int	i = 0, k = 0;
	while(dest[i]) {i++;}
	while(src[k])
		dest[i++] = src[k++];
	dest[i] = '\0';
	return dest;
}

void	clear_str(char *str)
{
	int	i = 0;
	while(str[i])
		str[i] = '\0';
}
int	equals(char *a, char *b)
{
	int	i = 0, l;
	if ((l = len(a)) != len(b)) return 0;
	while (i < l)
	{
		if (a[i] != b[i]) return 0;
		i++;
	}
	return 1;
}
char	*decode(char* chunk)
{
	int	i = 0;
	while (i < Size)
	{
		if (equals(morse[i], chunk))
			return ascii[i];
		i++;
	}
	return NULL;
}
void	remove_spaces_end(char* str)
{
	int l = len(str) - 1;
	while (str[l] == ' ')
		str[l--] = '\0';
}
char	*decode_morse(char* morse_codee) 
{

	char	*chunk, *result, *morse_code;
	int	i = 0, k = 0, spacec = 0;
	morse_code = malloc((len(morse_codee) + 1) * sizeof(char)); morse_code[0] = '\0'; append(morse_code, morse_codee);
	chunk = malloc(10 * sizeof(char));
	result = malloc((len(morse_codee) + 1) * sizeof(char));
	result[0] = '\0';
	while(morse_code[i] == ' ') {i++;} remove_spaces_end(morse_code);
	while(morse_code[i])
	{
		k = 0;
		spacec = morse_code[i] == ' ' ? spacec+1 : 0;
		if (spacec == 2) append(result, " ");
		while (morse_code[i] == '.' || morse_code[i] == '-')
		{
			chunk[k++] = morse_code[i++];
		}
		chunk[k] = '\0';
		if(chunk[0])
		append(result, decode(chunk));
		clear_str(chunk);	
		i++;
	}
	free(chunk);
	free(morse_code);
	return result;
}

int	main(int argc, char *argv[])
{
	if (argc < 2) return (0);
	char	*result = decode_morse(argv[1]);
	printf("%s\n", result);
	free(result);
	return (0);
}
