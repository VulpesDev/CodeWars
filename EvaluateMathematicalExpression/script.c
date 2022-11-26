#include<stdio.h>
#include<stdlib.h>

#define Multiplication 0
#define Division 1
#define Addition 2
#define Subtraction 3

double calculate (const char* expression)
{
	int	i = 0, c = 0, num = 0, k = 0;
	char*	curNum;
	char*	ptr;
	double*	code;
	double	r, num1, num2;

	curNum = malloc(50 * sizeof(double));
	code = malloc(50);
	while (expression[i])
	{
		if (!num) c = 0;
		if ((expression[i] <= 57 && expression[i] >= 48) || expression[i] == '.')
		{
			num = 1;
			curNum[c++] = expression[i];
			if (!expression[i+1])
			{
				num = 0;
                        	curNum[c] = '\0';
                        	r = strtod(curNum, &ptr);
                        	code[k++] = r;
			}
		}
		else
		{
			num = 0;
			curNum[c] = '\0';
			r = strtod(curNum, &ptr);
			code[k++] = r;
		}
		if (expression[i] == '*')
		{
			code[k++] = Multiplication;
		}
		else if (expression[i] == '/')
		{
			code[k++] = Division;
		}
		else if (expression[i] == '+')
		{
			code[k++] = Addition;
		}
		else if (expression[i] == '-')
		{
			code[k++] = Subtraction;
		}
		i++;
	}
	i = 0;
	while (i < k)
	{
		printf("%f %f %f\n", code[0], code[1], code[2]);
		num1 = code[0];
		num2 = code[2];
		switch ((int)code[1])
		{
			case Multiplication:
				return num1 * num2;
				break;
			case Division:
				return num1 / num2;
				break;
			case Addition:
				return num1 + num2;
				break;
			case Subtraction:
				return num1 - num2;
				break;
		}
		i++;
	}
	return 0;
}

int	main(void)
{
	printf("%f\n",calculate("3/2"));
	return (0);
}
