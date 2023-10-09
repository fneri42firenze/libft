#include "libft.h"

int ft_atoi (char *str)
{
    int i;
    int segno;
    int n;

    i = 0;
    segno = 1;
    n = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\v'))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            segno++;
        else
            i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (segno * n);
}