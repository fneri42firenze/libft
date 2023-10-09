#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    size_t i;
    
    i = ft_strlen(s);
	
	while (i--)
	if (*(s + i) == (char)c)
		return ((char*) s + i);
	return (0);
}

/*#include <stdio.h>
int main()
{
    char str[] = "ciao biella";
    char c = 'i';
    char *p;
    
    p = ft_strrchr(str, c);
    printf("%s\n", p);
    return 0;
}
*/