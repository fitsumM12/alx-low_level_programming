#include "lists.h"

/**
 * size_t print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: pointer to list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t s = 0;

	if (!h)
		return (0);

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
