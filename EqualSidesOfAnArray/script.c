#include<stdio.h>

int	find_even_index(const int *values, int length)
{
	int	sumb;
	int	sumf;

	for (int i = 0; i < length; i++)
	{
		sumb = 0; sumf = 0;

		for (int b = 0; b < i; b++)
		{
			sumb += values[b];
		}
		for (int f = length - 1; f > i; f--)
		{
			sumf += values[f];
		}
		if (sumb == sumf)
			return (i);
	}
	return (-1);
}

int	main(void)
{
	int	values[6] = {1,100,50,-51,1,1};
	int	size = 6;
	printf("%d\n", find_even_index(values, size));
	return (0);
}
