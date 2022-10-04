  #include<stdio.h>
  #include<stdlib.h>

  int	len(char *str)
  {
    int	result = 0;
    while (*(str++))
      result++;
    return result;
  }

  void	append(char *dest, char *src)
  {
    int	i = 0;
    while (dest[i]){i++;}
    while (*src)
      dest[i++] = *(src++);
    dest[i] = '\0';
  }

  void    rev_str(char *str)
  {
          int     length = len(str);
          int     i = 0, k = length - 1;
          while(i < length/2)
          {
                  char    temp = ' ';
                  temp = str[i];
                  str[i] = str[k];
                  str[k] = temp;
                  i++; k--;
          }
  }

  char    *int_str(int i)
  {
          char    *result;
          int     k = 0;
          result = malloc(10 * sizeof(char));
          while (i > 0)
          {
                  result[k++] = '0' + (i % 10);
                  i /= 10;
          }
    result[k] = '\0';
          rev_str(result);
          return result;

  }

  char	*formatDuration (int n)
  {
    char	*result;
    int	years, days, hours, minutes, seconds, counter = 0;
    result = malloc(150 * sizeof(char));
    result[0] = '\0';
    if (n <= 0)
    {
      append(result, "now");
      return result;
    }

    minutes = n / 60;
    seconds = n % 60;
    hours = minutes / 60;
    minutes %= 60;
    days = hours / 24;
    hours %= 24;
    years = days / 365;
    days %= 365;

    if (years > 0)
      counter++;
    if (days > 0)
      counter++;
    if (hours > 0)
      counter++;
    if (minutes > 0)
      counter++;
    if (seconds > 0)
      counter++;

    if (years > 0)
    {
      char	*stry = int_str(years);
      append(result, stry);
      free(stry);
      append(result, " year");
      if (years != 1) append(result, "s");
      counter--;
      if (counter > 0) append(result, counter == 1 ? " and " : ", ");
    }
    if (days > 0)
          {
      char	*strd = int_str(days);
                  append(result, strd);
      free(strd);
                  append(result, " day");
      if (days != 1) append(result, "s");
      counter--;
      if (counter > 0) append(result, counter == 1 ? " and " : ", ");
          }
    if (hours > 0)
          {
      char	*strh = int_str(hours);
                  append(result, strh);
      free(strh);
                  append(result, " hour");
      if (hours != 1) append(result, "s");
      counter--;
      if (counter > 0) append(result, counter == 1 ? " and " : ", ");
          }
    if (minutes > 0)
          {
      char	*strm = int_str(minutes);
                  append(result, strm);
      free(strm);
                  append(result, " minute");
      if (minutes != 1) append(result, "s");
      counter--;
      if (counter > 0) append(result, counter == 1 ? " and " : ", ");
          }
    if (seconds > 0)
          {
      char	*strs = int_str(seconds);
                  append(result, strs);
      free(strs);
                  append(result, " second");
      if (seconds != 1) append(result, "s");
      counter--;
      if (counter > 0) append(result, counter == 1 ? " and " : ", ");
          }	
    return result;
  }

