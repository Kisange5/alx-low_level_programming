#include "lists.h"

/**
 * print_dlistint - A  function that prints all the elements of a dlistint_t list.
 * @h: the head of the linked lists
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return(count);
}
