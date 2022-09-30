#include <stdio.h>
#include <stdlib.h>

int	cf_length(const char *str)
{
	int	result = 0;
	while (*(str++))
		result++;
	return result;
}

char	*int_to_str(int ch)
{
	char    *result;
	int     i = 0, length;
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
		char    temp;
		temp = result[i];
		result[i] = result[length - 1 - i];
		result[length - 1 - i++] = temp;
	}
	return result;
}

char	*encrypt_this(const char *str)
{
	char	*result, *num;
	int	i = 0, length = cf_length(str);
	result = malloc((length + 3) * sizeof(char)); if (!result) return NULL; 
	num = int_to_str(str[0]);
	for (int k = 0; num[k]; k++)
	{
		result[i++] = num[k];
	}
	free(num);
	result[i++] = str[length - 1];
	for (int k = 2; k < length - 1; k++)
		result[i++] = str[k];
	result[i++] = str[1];
	result[i] = '\0';
	return result;
}

int	main(void)
{
	char	*str = encrypt_this("Hello");
	printf("%s\n", str);
	free(str);

	return (0);
}
