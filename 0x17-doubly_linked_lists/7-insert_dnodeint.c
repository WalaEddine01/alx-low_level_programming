#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at the index
 * @n: data
 * @idx: the index of the node
 * @h: pointer to the list
 * Return: pinter to the new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ptr, *ptr2;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	ptr = *h;
	while (ptr && ptr->next && idx != 1)
	{
		ptr = ptr->next;
		idx--;
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	if (idx > 1)
		return (NULL);
	ptr2 = ptr->next;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = ptr2;
	new->prev = ptr;
	ptr2->prev = new;
	ptr->next = new;
	return (*h);
}
