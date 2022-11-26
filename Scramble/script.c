#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int	len(char *str)
{
	int i = 0;
	while(str[i++])
	{;}
	return i-1;
}

void	str_dup(char *dest, char *src)
{
	int	i = 0, k = 0;
	while (src[i])
		dest[k++] = src[i++];
}

bool	scramble(char *str1, char *str2)
{
	int	i = 0, k = 0, found = 0;
	char	c = ' ', *str11;

	str11 = malloc((len(str1) + 1) * sizeof(char));	
	str_dup(str11, str1);
	while (str2[i])
	{
		c = str2[i];
		found = 0;
		k = 0;
		while(str11[k])
		{
			if (c == str11[k])
			{
				found = 1;
				str11[k] = '0';
				break;
			}
			k++;
		}
		if (!found)
		{
			free(str11);
                	return false;
		}
		i++;
	}
	free(str11);
	return true;
}

int	main(int argc, char *argv[])
{
	if (argc < 2) return (0); 
	printf("%d\n", scramble(argv[1], argv[2]));
	return (0);
}
