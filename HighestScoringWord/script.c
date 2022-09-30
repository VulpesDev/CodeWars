#include<stdio.h>
#include<stdlib.h>

struct	wordPoint
{
	char	*str;
	int	value;
};

int	*count_words(const char *str)
{
	int	*result;
	int	word_count = 0, inword = 0, i = 0, ch_count = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			inword = 0;
		}
		else
		{
			if (!inword)
			{
				word_count++;
				inword = 1;
			}
		}
		i++;
	}
	
	printf("%s%d\n", "Inside word count: ", word_count);	
	result = malloc((word_count + 1) * sizeof(int));
	
	word_count = -1; i = 0; ch_count = 0;
        while (str[i])
        {
                if (str[i] == ' ' && inword)
                {
                        inword = 0;
			result[word_count] = ch_count;
			ch_count = 0;
                }
                else if (str[i] >= 97 && str[i] <= 122)
                {
                        if (!inword)
                        {
                                word_count++;
                                inword = 1;
                        }
			ch_count++;
                }
                i++;
        }
	result[word_count] = -1;
	return result;
}
/*
char	*highestScoringWord(const char *str)
{
}
*/
int	main(void)
{
	int	*arr, i = 0;
	arr = count_words("come with me boy");
	while (arr[i] != -1)
	{
		printf("%s%d%s%d\n", "Word: ", i, " Chars: ", arr[i]);
		i++;
	}
	return (0);
}
