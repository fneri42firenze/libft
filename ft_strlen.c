#include "libft.h"

int	ft_strlen(const char *str)
{
	int	conta;

	conta = 0;
	while (str[conta] != '\0')
	{
		conta++;
	}
	return (conta);
}