#include<stdio.h>

enum outcome {WOOHOO, CAR_DEAD};

enum outcome car_state (const char *road)
{
	int	counter = 0;

	while (*road != '\0')
		if (*road == 'n')
			counter++;
	if (counter <= 15)
		return WOOHOO
	return CAR_DEAD;
}

int	main(void)
{
	return (0);
}
