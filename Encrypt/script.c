#include<stdio.h>
#include<stdlib.h>

int	is_char(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

char	*ctois(char c)
{
	char	*result;
	int	ci = (int)c;
	result = malloc(sizeof(char) * 4);
	if (ci < 100)
	{
		result[0] = '0' + ci / 10;
		result[1] = '0' + ci % 10;
		result[2] = '\0';
	}
	else
	{
		result[0] = '0' + ci / 100;
		result[1] = '0' + (ci / 10) % 10;
		result[2] = '0' + ci % 10;
		result[3] = '\0';
	}
	return	result;
}

int	words_count(const char *str)
{
	int	word_count = 0;
	int	in_word = 0;
	while (*str)
	{
		if (is_char(*str))
		{
			if (!in_word)
			{
				in_word = 1;
				word_count++;
			}
		}
		else
			in_word = 0;
		str++;
	}
	return	word_count;
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		size;
	char	*fresult;

	size = 0;
	while (src[size])
		size++;
	result = (char *) malloc((size + 1) * sizeof(char));
	fresult = result;
	while (*src)
	{
		*result = *src;
		result++;
		src++;
	}
	*result = '\0';
	result = fresult;
	return (result);
}

char	**words(char *str)
{
	char	**result;
	char	*strr = ft_strdup(str);
	int	wordsCount = words_count(str);
	int	in_word = 0, i = 0, k = 0;
	result = malloc(sizeof(char*) * wordsCount);
	while(strr[i])
	{
		if (is_char(strr[i]))
		{
			if (!in_word)
			{
				in_word = 1;
				result[k++] = &strr[i];
			}
		}
		else
		{
			in_word = 0;
			strr[i] = '\0';
		}
		i++;
	}
	i = 0;
	while (i < wordsCount)
	{
		k = 0;
		int	count = 0;
		while (result[i][k])
		{
			count++;
			k++;
		}
		if(count >= 3)
		{
			//switch letters
			char	temp = result[i][count - 1];
			result[i][count - 1] = result[i][1];
			result[i][1] = temp;
		}
		i++;
	}
	return	result;
}
int	size(char *str)
{
	int result = 0;
	while(*(str++))
		result++;
	return result;
}
char	*encrypt_this(char *str)
{
	int i = 0, wordsCount = words_count(str), w = 0, k = 0;
	char	**wwords = words(str);
	char	*result;
	result = malloc(size(str) * sizeof(char));
	while (w < wordsCount)
	{
		char	*fwnum = ctois(wwords[w][0]);
		while(*fwnum)
			result[i++] = *(fwnum++);
		k = 1;
		while (wwords[w][k])
		{
			result[i++] = wwords[w][k];
			k++;
		}
		if (w != wordsCount - 1)
		result[i++] = ' ';
		w++;
	}
	free(wwords);
	return result;
}
int	main(void)
{
	char	*result = encrypt_this("Abcd Aahhhhhhhhhhhhhhhhz");
	printf("%s\n", result);
	free(result);
	return (0);
}
