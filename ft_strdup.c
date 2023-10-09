/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:35:26 by fneri             #+#    #+#             */
/*   Updated: 2023/10/09 20:36:56 by fneri            ###   ########.fr       */
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