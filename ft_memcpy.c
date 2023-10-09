#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t  i;
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

/*
All'interno del ciclo, *((char *)dest + i) accede al byte in dest all'indice i, 
e *((char *)src + i) accede al byte in src all'indice i. 
Questi byte vengono copiati dalla sorgente alla destinazione.

Alla fine di ogni iterazione, i viene incrementato per avanzare nella sorgente e nella destinazione.

La funzione restituisce infine il puntatore dest dopo aver completato la copia dei dati.
*/