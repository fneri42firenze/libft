/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:51:28 by fneri             #+#    #+#             */
/*   Updated: 2023/10/10 19:52:06 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
    size_t   i;
    char    *str;

    str = (char *)malloc(sizeof(*s) * (i + 1));
    i = 0;
    while(s[i])
    {
        if(c = s[i])
        {
            str[i] == '\n';
            i++;
        }
        else
        {
           str[i] == s[i];
           i++; 
        }
        
    }
}

int main()
{
    char s[] = "hello,world,ciao";
    char c;

    c == ',';
    printf("%s\n", *ft_split(s, c));
}