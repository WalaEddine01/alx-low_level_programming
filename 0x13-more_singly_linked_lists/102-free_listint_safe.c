#include "lists.h"
/**
 * free_listint_safe - frees the list
 * @h: input list
 * Return: size of the list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr = NULL, *ptr2 = NULL;
	size_t n = 0;

	if (!h || !*h)
		return (n);
	ptr2 = *h;
	while (ptr2)
	{
		ptr = ptr2;
		ptr2 = ptr2->next;
		free(ptr);
		n++;
	}
	ptr2 = NULL;
	return (n);
}
