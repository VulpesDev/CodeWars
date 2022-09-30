#include <stdio.h>
#include <stdlib.h>

int	cf_len(char *str)
{
	int	result = 0;

	while (*(str++) != '\0')
		result++;
	return result;
}

char	*DuplicateEncoder(char *arr)
{
	char	*result;
	int	counter = 0, i = 0;

	result = malloc(cf_len(arr) * sizeof(char));
	if (!result)
		return (void *)0;
	while (arr[i])
	{
		counter = 0;
		for (int k = 0; arr[k]; k++)
		{
			if (arr[k] == arr[i] || ((arr[k] >= 'a' && arr[k] <= 'z') && arr[i] == arr[k] - 32) ||
				((arr[k] >= 'A' && arr[k] <= 'Z') && arr[i] == arr[k] + 32))
				counter++;	
		}

		result[i] = counter > 1 ? ')' : '(';
		i++;
	}
	result[i] = '\0';
	return result;
}

int	main(void)
{
	char	arr[3] = {'?', '@', '?'};
	char	*arrRes = DuplicateEncoder(arr);
	printf("%s\n", arrRes);
	free(arrRes);
	return (0);
}
