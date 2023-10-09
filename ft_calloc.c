#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *appoggio;

	appoggio = malloc(count * size);
	if (appoggio == NULL)
		return (appoggio);
	ft_bzero(appoggio, size * count);
	return (appoggio);
}

// Viene allocata  una porzione di memoria usando la funzione malloc per (count * size) byte. 
// Il puntatore a questa memoria viene assegnato alla variabile ptr.

// Viene effettuato un controllo per verificare se l'allocazione di memoria tramite malloc è riuscita. 
// Se malloc restituisce un puntatore NULL, significa che non c'è abbastanza memoria disponibile 

// Se l'allocazione di memoria ha successo, viene utilizzata la funzione ft_bzero 
// per inizializzare tutti i byte della memoria allocata a zero. 

// La funzione restituisce il puntatore ptr, che punta alla memoria allocata con i byte inizializzati a zero.


// NB: [CALLOC RESETTA E ALLOCA, MALLOC ALLOCA SOLTANTO]