#include<stdio.h>

void	build_tower(unsigned n, char tower[n][2 * n - 1])
{
	int	all, i, s,;
	all = n * 2 - 1;
	i = 0; s = 1; c = 0;
	while (i < n)
	{
		c = 0;
		while (c < all / 2 - i)
		{
			tower[i][c++] = ' ';
		}
		c = 0;
		s += i * 2;
		while (c < s)
		{
			tower[i][c++] = '*';
		}
		c = 0;
		while (c < all / 2 - i)
                {
                        tower[i][c++] = ' ';
                }
		i++;
	}
}

int	main(void)
{
	return (0);
}
