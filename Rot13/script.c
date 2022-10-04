#include<stdio.h>
#include<stdlib.h>

int	len(char *str)
{
	int	result = 0;
	while(*(str++))
		result++;
	return result;
}

char	*rot13(char *src)
{
	int	i = 0, k = 0;
	char	*result;
	result = malloc(len(src) * sizeof(char));
	while (src[i])
	{
		if ((src[i] >= 65 && src[i] <= 77) || (src[i] >= 97 && src[i] <= 109))
		{
			result[k] = src[i] + 13; 
		}
		else if ((src[i] >= 78 && src[i] <= 90) || (src[i] >= 110 && src[i] <= 122))
		{
			result[k] = (src[i] + 13) - 24;
		}
		else
			result[k] = src[i];
		i++; k++;
	}
	result[k] = '\0';
	return result;
}

int	main(int argc, char *argv[])
{
	if (argc < 2) return (0);
	char	*result = rot13(argv[1]);
	printf("%s\n", result);
	free(result);
	return (0);
}
