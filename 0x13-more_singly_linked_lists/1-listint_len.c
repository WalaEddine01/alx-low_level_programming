#include "lists.h"
/**
 * listint_len - Returns the number of elements
 * @h: input list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *p;

	if (h == 0)
		return (0);
	p = h;
	while (p != 0)
	{
		p = p->next;
		i++;
	}
	return (i);
}
