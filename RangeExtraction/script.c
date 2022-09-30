#include<stdio.h>
#include<stdlib.h>

int	cpy(char *dest, char *src, int k)
{
	int t = 0;
	while(src[t])
		dest[k++] = src[t++];
	return k;
}

char	*range_extraction(const int *args, size_t n)
{
	size_t	i = 0;
	int	st_i = 0, st_num = 0, counter = 0, k = 0;
	char	*result;
	char	temp[10];

	result = malloc(n * 4 * sizeof(char));
	while (i < n)
	{
		st_num = args[i];
		st_i = i;
		counter = 0;
		while ((args[i] - args[i+1] == 1 || args[i] - args[i+1] == -1) && i+1 < n)
		{
			counter++;
			i++;
		}
		if (sprintf(temp, "%d", st_num) < 0) printf("%s\n", "Error converting to string!");
		k = cpy(result, temp, k);
		if (counter >= 2)
		{
			result[k++] = '-';
			if (sprintf(temp, "%d", args[i]) < 0) printf("%s\n", "Error converting to string!");
			k = cpy(result, temp, k);
		}
		else
			i = st_i;
		if (i != n - 1)result[k++] = ',';
		i++;
	}
	result[k] = '\0';
	return result;
}

int	main(void)
{
	char *string = range_extraction((const int[]){ -6,-3,-2,-1,0,1,3,4,5,7,8,9,10,11,14,15,17,18,19,20 }, 20);
	printf("%s\n", string);
	free(string);
	return (0);
}
