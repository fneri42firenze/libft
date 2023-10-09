/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fneri <fneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:33:07 by fneri             #+#    #+#             */
/*   Updated: 2023/10/09 20:37:28 by fneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*l;

	l = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		*(l + i) = 0;
		i++;
	}
}

/*
Riceve due argomenti:
void *s: un puntatore a una zona di memoria da azzerare.
size_t n: il numero di byte da azzerare a partire dall'indirizzo puntato da s.
All'interno della funzione, viene dichiarata una variabile i di tipo size_t e un puntatore l a unsigned char. 
Il puntatore l viene inizializzato con il valore del puntatore s castato a unsigned char *.
Viene eseguito un ciclo while che itera da 0 fino a n - 1. Durante ogni iterazione, il valore puntato da l + i viene impostato a zero (0), azzerando così il byte corrispondente nell'area di memoria.
*/