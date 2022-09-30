#include <stdio.h>
#include <stdlib.h>

int	cf_len(const char *str)
{
	int	result = 0;
	while (*(str++))
		if (*str != ' ')
			result++;
	return result;
}

char	*no_space(const char *str_in)
{
	char	*result;
	char	*sresult;
	result = malloc(cf_len(str_in) * sizeof(char));
	if (!result)
		return NULL;
	sresult = result;
	while (*(str_in++))
	{
		if (*(str_in - 1) != ' ')
			*(result++) = *(str_in - 1);
	}
	return sresult;
}

int	main(void)
{
	printf("%s", no_space("dumb fuck idiot"));
	return (0);
}
