#include <stdio.h>
#include "lists.h"

/**
 * print_list - Imprime tous les éléments d'une liste list_t.
 * @h : pointeur vers le début de la liste.
 *
 * Return : Le nombre de nœuds dans la liste.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
