#include<stdio.h>
#include<stdlib.h>

void	concat(char *str, char *str2)
{
	int i = 0, j = 0;
	while (str[i]) i++;
	while (str2[j])
		str[i++] = str2[j++];
	str[i] = '\0';
}

char	*solution(int n)
{
	char	*result;
	result = malloc( (4*4 + 1) * sizeof(char));
	while (n / 10 > 0)
	{
		if (n < 10)
		{
			switch (n)
			{
				case 1:
					concat(result, "I");
					break;
				case 2:
					concat(result, "II");
					break;
				case 3:
					concat(result, "III");
					break;
				case 4:
					concat(result, "IV");
					break;
				case 5:
					concat(result, "V");
					break;
				case 6:
					concat(result, "VI");
					break;
				case 7:
					concat(result, "VII");
					break;
				case 8: 
					concat(result, "VIII");
					break;
				case 9:
					concat(result, "IX");
					break;
			}
		}
		else if (n < 100)
		{
			switch (n / 10)
	                {
        	                case 1:
                	                concat(result, "X");
                        	        break;
	                        case 2:
        	                        concat(result, "XX");
                	                break;
                        	case 3:
	                                concat(result, "XXX");
	                                break;
	                        case 4:
        	                        concat(result, "XL");
                	                break;
	                        case 5:
        	                        concat(result, "L");
                	                break;
	                        case 6:
        	                        concat(result, "LX");
                	                break;
	                        case 7:
        	                        concat(result, "LXX");
                	                break;
                        	case 8:
                                	concat(result, "LXXX");
	                                break;
        	                case 9:
                	                concat(result, "XC");
                        	        break;
	                }
		}
		n /= 10;
	}
	return result;
}

int	main(void)
{
	printf("%s\n", solution(16));
	return (0);
}
