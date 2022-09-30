#include<stdio.h>
#include<stdlib.h>

char    *to_str(int ch)
{
        char    *result;
        int     i = 0, length;
        result = malloc(4*sizeof(char)); if (!result) return NULL;
        while (ch / 10 > 0)
        {
                result[i++] = ch % 10 + 48;
                ch /= 10;
        }
        result[i++] = ch % 10 + 48;
        result[i] = '\0';
        length = i;
        i = 0;
        while (i < length / 2)
        {
                char    temp;
                temp = result[i];
                result[i] = result[length - 1 - i];
                result[length - 1 - i++] = temp;
        }
        return result;
}

char	*arithmetic_sequence_elements(int a, int d, size_t n)
{
	char	*result;
	char	num[10];
	int	j = 0, i = 0, k = 0;
	result = malloc(n * 3 * sizeof(char));
	
	while (i < (int)n)
	{
		sprintf(num, "%d", a);
		j = 0;
		while (num[j])
		{
			result[k++] = num[j++];
			i++;
		}
		a += d;
		result[k++] = ',';
		result[k++] = ' ';
	}
	result[k] = '\0';
	while (result[--k] == ' ') {;}
	if (result[k] == ',') result[k] = '\0';
	return result;
}

int	main(void)
{
	printf("%s\n", arithmetic_sequence_elements(1, 2, 5));
	return (0);
}
