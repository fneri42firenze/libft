#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t num)
{
	char	*str;
    size_t i;
    i = 0;

	str = (char *)s;
	while (i < num)
	{
		if (str[i] == c)
		{
			return (str + i);
		}
		i++;
	}
	return (NULL);
}