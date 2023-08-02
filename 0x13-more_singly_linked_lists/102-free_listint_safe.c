#include "lists.h"
/**
 * free_listint_safe - frees the list
 * @h: input list
 * Return: size of the list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	int diff;
	listint_t *ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
			break;
		}
	}
	*h = NULL;
	return (i);
}
