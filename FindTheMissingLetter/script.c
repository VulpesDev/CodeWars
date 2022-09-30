#include <stdio.h>

char	findMissingLetter (char array[], int arrayLength)
{
	for (int i = 1; i < arrayLength; i++)
	{
		if (array[i] - array[i - 1] != 1)
			return (array[i - 1] + 1);
	}
	return ' ';
}

int	main(void)
{
	char	array[5] = {'a','b','c','d','f'};
	int	size = 5;
	printf("%c\n", findMissingLetter(array, size));
	return (0);
}
