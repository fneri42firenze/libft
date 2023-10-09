#include "libft.h"

int ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t i;

    s1 = (unsigned char *)ptr1;
    s2 = (unsigned char *)ptr2;

    i = 0;
     while (i < n)
     {
        if(s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
     }
return 0;
}

// #include <stdio.h>
// int main()
// {
//     char ptr1[] = "abef";
//     char ptr2[] = "abef";
//     printf("%d\n", ft_memcmp(ptr2, ptr1, 4));
// }