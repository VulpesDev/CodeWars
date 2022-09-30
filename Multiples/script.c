#include<unistd.h>

int	solution(int number)
{
	int	result = 0, i = 1;
	while (i <= number)
	{
		if (i % 3 == 0 && i % 5 == 0)
			result += i;
		else if (i % 3 == 0 || i % 5 == 0)
			result += i;
		i++;
	}
	return result;
}
