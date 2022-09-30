#include<stdio.h>
#include<stdlib.h>

int	len(char *str)
{
	int	result = 0;
	while (*(str++))
		result++;
	return result;
}

void	append(char *dest, char *src)
{
	int	i = 0;
	while (dest[i]){i++;}
	while (*src)
		dest[i++] = *(src++);
	dest[i] = '\0';
}

char	*formatDuration (int n)
{
	char	*result;
	int	years, days, hours, minutes, seconds;
	result = malloc(150 * sizeof(char));

	if (n <= 0)
	{
		append(result, "now");
		return result;
	}

	minutes = n / 60;
	seconds = n % 60;
	hours = minutes / 60;
	minutes %= 60;
	days = hours / 24;
	hours %= 24;
	years = days / 365;
	days %= 365;
	printf("%d%s%d%s%d%s%d%s%d%s", years, " years, ", days, " days, ", hours, " hours, ", minutes, " minutes and ", seconds, " seconds");
	return result;
}

int	main(void)
{
	char	*re = formatDuration(176810816);
	printf("%s\n", re);
	free(re);
	return (0);
}
