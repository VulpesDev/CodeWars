#include<stdio.h>
#include<stdlib.h>

int	len(char *str)
{
	int	counter = 0;
	while (*(str++))
		counter++;
	return counter;
}

void	concat(char *str1, char *str2)
{
	while (*(str1++))
	{;}
	while (*str2)
		*(str1++) = *(str2++);
	*str1 = '\0';
}

const char* baby_shark_lyrics()
{
	char	*lyrics[] = 
	{
		" doo doo doo doo doo doo",
		"Baby shark",
		"Mommy shark",
		"Daddy shark",
		"Gradma shark",
		"Let's go hunt",
		"Run away,..."
	};
	char	*result;
	result = malloc(800 * sizeof(char));
	for	(int i = 1; i < 6; i++)
	{
		for (int k = 0; k < 4; k++)
		{
			concat(result, lyrics[i]);
			concat(result, ",");
			concat(result, lyrics[0]);
			concat(result, "\n");
		}
		concat(result, lyrics[i]);
		concat(result, "!\n");
	}
	concat(result, lyrics[6]);
	return result;
}

int	main(void)
{
	/*const char	*str = baby_shark_lyrics();
	printf("%s\n", str);*/
	char	str[100] = "Hey ";
	concat(str, "yo!");
	printf("%s\n", str);
	return (0);
}
