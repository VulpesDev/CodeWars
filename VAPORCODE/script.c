#include <stdio.h>
#include <stdlib.h>

int	cf_len(const char *src)
{
	int	result = 0;
	while (*(src++))
		result++;
	return (result);
}
char	*clean(const char *src)
{
	char	*result;
	int	k = 0;
	result = malloc(cf_len(src) * sizeof(char)); if (!result) return NULL;
	for (int i = 0; src[i] != '\0'; i++)
	{
		if (src[i] != ' ')
		{
			if (src[i] >= 97 && src[i] <= 122)
				result[k++] = src[i] - 32;
			else
				result[k++] = src[i];
		}
	}
	result[k] = '\0';
	return (result);
}

void	vaporcode(const char *src, char *dst)
{
	char	*clean_s;
	int	k = 0;
	clean_s = clean(src);
	for (int i = 0; i < cf_len(clean_s); i++)
	{
		dst[k++] = clean_s[i];
		if (i + 1 != cf_len(clean_s))
		{
			dst[k++] = ' ';
			dst[k++] = ' ';
		}
	}
	dst[k] = '\0';
}
int	main(void)
{
	const char	a[] = "Let's go to the movies";
	char	b[53];
	vaporcode(a, b);
	printf("%s\n", b);
	return (0);
}
