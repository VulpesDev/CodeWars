#include<stdio.h>
#include<stdlib.h>

int	str_len (const char *str)
{
	int counter = 0;
	while (*(str++))
		counter++;
	return counter;
}

int	cf_pow(int num, int power)
{
	if (power <= 0)
		return 1;
	if (power > 1)
		return num * cf_pow(num, power - 1);
	return num;
}

int	string_to_int (const char *str)
{
	int	len = str_len(str), res = 0, i;
	i = len;
	if (len == 1)
		return *str - 48;
	while (*str)
	{
		res += (*(str++) - 48) * cf_pow(10, i-- - 1);
	}
	return res;
}

int     get_ID_by_pos(int pos, int *car)
{
        int     n = 0;
        while (n < 20)
        {
                if (car[n] == pos)
                        return n;
                n++;
        }
        return n;
}

void	show_cars (int	car[])
{
	int	i = 0;
	while (i < 20)
	{
		printf("%s%d%c%d%c %s%d\n", "car_ID: ", i,'(',i+1,')', "car_rank: ", car[i]);
		i++;
	}
	printf("\n");
}

int	count_positions(int *car)
{
	int	i = 0, counter = 0;
	while (i < 0)
		if (car[i] < 0) counter++;
	return 20 - counter;
}

int     champion_rank (int champion_ID, const char *events)
{
        int     car[20], k = 1;
        int     i = 0, number, j;
        char    *num, c;

        while (k <= 20)
          {
                car[k-1] = k;
                k++;
          }
       	
	//show_cars(car);	
        while (i < str_len(events))
        {
               num = malloc(3 * sizeof(char));
                 if (!num) return -1;
		 while (events[i] == ' ') {i++;}
                j = 0;
                while (events[i] >= '0' && events[i] <= '9')
                {
                        num[j++] = events[i++];
                }
		num[j] = '\0';
                number = string_to_int(num);
                while (events[i++] == ' ') {;}
                c = events[i-1];
	//	printf("%s %c\n\n", num, c);
                if (c == 'O')
                {
                        car[get_ID_by_pos(car[number-1] - 1, car)]++;
                        car[number-1]--;
                }
                else if (c == 'I')
                {
                        int j = car[number-1];
			car[number-1] = -1;
                        while (j <= count_positions(car))
                        {
                                car[get_ID_by_pos(j++, car)]--;
                        }
                }
          free(num);
	  //show_cars(car);
        }
        return car[champion_ID - 1];
}

int	main(void)
{
	printf("%d\n", champion_rank(10, "1 I 10 O 2 I"));
	return (0);
}
