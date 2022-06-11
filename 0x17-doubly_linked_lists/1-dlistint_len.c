#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: pointer to the list
 *
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t s = 0;

	if (!h)
		return (0);
	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
