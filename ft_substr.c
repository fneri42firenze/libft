/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:13:29 by fneri             #+#    #+#             */
/*   Updated: 2023/10/10 14:19:09 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
	char *str;

    i = 0;
	j = 0;
    if(!str)
        return (NULL);
    str = (char*)malloc(sizeof(*s) * (len + 1));
    while(s[i])
    {
        if (i >= start && j < len)
		{
			str[j] = s[i];
        	j++;
		}
		i++;
    }
	str[j] = '\0';
    return (str);
}

/*#include <stdio.h>
int  main()
{
    char    s[] = "abcdef";
    printf("%s\n", ft_substr(s, 3, 2));
}*/
