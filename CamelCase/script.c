#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

int	len(char *str)
{
	int result = 0;
	while (*(str++))
		result++;
	return result;
}

char*	solution(char *camelCase)
{
	int	i = 0, k = 0;
	char*	result;
	result = malloc(len(camelCase)*2*sizeof(char));
	while (camelCase[i])
	{
		if (camelCase[i] >= 65 && camelCase[i] <= 90)
			result[k++] = ' ';
		result[k++] = camelCase[i];
		i++;
	}
	result[k] = '\0';
	return	result;
}

int	main(void)
{
	printf("%s\n", solution("camelCase"));
	return 0;
}
