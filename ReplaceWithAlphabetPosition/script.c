#include <stdio.h>
#include <stdlib.h>

char	*to_str(int ch)
{
	char	*result;
	int	i = 0, length;
	result = malloc(4*sizeof(char)); if (!result) return NULL;
	while (ch / 10 > 0)
	{
		result[i++] = ch % 10 + 48;
		ch /= 10;
	}
	result[i++] = ch % 10 + 48;
	result[i] = '\0';
	length = i;
	i = 0;
	while (i < length / 2)
	{
		char	temp;
		temp = result[i];
		result[i] = result[length - 1 - i];
		result[length - 1 - i++] = temp;
	}
	return result;
}

int	cf_len(const char *str)
{
	int	result = 0;
	while (*(str++))
		result++;
	return result;
}

char	*alphabet_position(const char *text)
{
	char	*str, *str_id;
	int	i = 0, k = 0, j = 0, no_word = 1;
	str = malloc(cf_len(text) * 4 * sizeof(char)); if (!str) return NULL;
	while (text[i] != '\0')
	{
		if ((text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90))
		{
			no_word = 0;
			if (text[i] >= 97 && text[i] <= 122)
				str_id = to_str((int)text[i] - 96);
			else if (text[i] >= 65 && text[i] <= 90)
				str_id = to_str((int)text[i] - 64);
			k = 0;
			while (str_id[k] != '\0')
				str[j++] = str_id[k++];
			str[j++] = ' ';
		       if (str_id[0] != '\0') free(str_id);
		}
		i++;
	}
	while (str[j--] == ' ') {;}
	printf("%d\n", j);
	str[j] = '\0';
	if (no_word) str[0] = '\0';
	return str;
}


int	main(void)
{
	char	*num = alphabet_position("3426808422");
	printf("%s\n", num);
	free (num);
	return (0);
}
