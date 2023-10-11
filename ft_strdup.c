/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:26 by fneri             #+#    #+#             */
/*   Updated: 2023/10/11 22:37:35 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*result;

	i = 0;
	while (src[i])
		i++;
	result = malloc(sizeof(char) * i + 1);
	i = 0;
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	return (result);
}
/*int main ()
{
	char src[] = "ciao";
	printf("%s", ft_strdup(src));
	return (0);
}*/