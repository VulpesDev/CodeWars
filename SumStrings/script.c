#include <malloc.h>
#include <string.h>

char	*strsum(const char *a, const char *b)
{
	long long	ai, bi;
	sprintf(ai, "%s", a);
	printf("%d\n", ai);
	sprintf(bi, "%s", b);
	sprintf("%d\n", bi);
	return NULL;
}

int	main(void)
{
	strsum("5", "2");
	return (0);
}
