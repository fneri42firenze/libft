/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:42 by fneri             #+#    #+#             */
/*   Updated: 2023/10/09 20:36:00 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find,size_t n)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (to_find[a] == '\0')
		return ((char *)str);
	while (str[a] && a < n)
	{
		b = 0;
		while (str[b + a] == to_find[b] && (a + b) < n)
		{
			if (to_find[b + 1] == '\0')
			{
				return ((char *)str + a);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
