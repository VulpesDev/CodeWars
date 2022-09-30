#include<stdio.h>

int	divisors(int n)
{
	int	i = 1, counter = 0;
	while (i <= n)
		if (n % i == 0)
			counter++;
	return counter;

}
