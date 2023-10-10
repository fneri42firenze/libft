#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;

    i == start - 1;
    char *str;
    if(!s)
        return (NULL);
    str = (char *)malloc(sizeof(*str) * (len + 1));
    while(i = len)
    {
        str = (char *)s;
        i++;
    }
    return (str);
}

#include <stdio.h>
int  main()
{
    char    s[] = "";
    printf("%s\n", ft_substr(s, 3, 2));
}