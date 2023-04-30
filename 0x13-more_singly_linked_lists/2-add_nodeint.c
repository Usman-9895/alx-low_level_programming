#include <stdlib.h>
#include <string.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - ajoute un nouveau noeud au début d'une liste
 * @head: double pointeur vers la liste
 * @n: chaine de caractères à stocker dans le nouveau noeud
 *
 * Return: adresse du nouveau noeud ou NULL si l'allocation a échoué
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = (*head);	
	(*head) = new;

	return (*head);
}
