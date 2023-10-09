#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t  i;
    if(src < dest)
    {
        char *destinazione;
        char *origine;

        destinazione = (char *)dest;
        origine = (char *)src;
        i = n;
        while (i--)
            destinazione[i] = origine[i];
    }
    else 
    {
        ft_memcpy(dest, src, n);
    }
	return (dest);
}

// #include <stdio.h>
// int main()
// {
//     char src[] = "spiderman";
//     char dest[] = "boh";
//     size_t n = 3;

//     ft_memmove(dest, src, n);
//     printf("src is: %s\n" , src);
//     printf("dest is: %s\n" , dest);
// }
