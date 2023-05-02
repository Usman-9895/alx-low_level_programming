#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
	sum += head->n;
	head = head->next;
	}

	return (sum);
}
