#include<stdio.h>
#include<stdbool.h>

bool xo (const char *str)
{
	int	countX = 0, countO = 0;
	while (*str)
	{
		if (*str == 'x' || *str == 'X')
			countX++;
		else if (*str == 'o' || *str == 'O')
			countO++;
		str++;
	}
	return countX == countO ? true : false;
}

int	main(void)
{
	printf("%d\n", xo("ooxxx"));
	return(0);
}
