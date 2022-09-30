#include <stdio.h>

int countNums (int num)
{
	int result = 0;
	while (num != 0)
	{
		num /= 10;
		result++;
	}
	return result;
}

int centuryFromYear(int year)
{
	if (year % 100 > 0)
		return year / 100 + 1;
	return year / 100;
}

int	main(void)
{
	printf("%d\n", centuryFromYear(101));
	return (0);
}
