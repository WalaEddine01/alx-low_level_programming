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
	while (idx != 1)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
		idx--;
	}
	if (ptr->next == NULL)
		return (add_dnodeint_end(h, n));
	ptr2 = ptr->next;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = ptr2;
	new->prev = ptr;
	if (ptr2)
		ptr2->prev = new;
	ptr->next = new;
	return (*h);
}
