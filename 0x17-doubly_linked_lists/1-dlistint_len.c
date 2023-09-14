#include "lists.h"
/**
 * dlistint_len - returns the number of elements of the list
 * @h: pointer to the head of the list
 * Return: the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
