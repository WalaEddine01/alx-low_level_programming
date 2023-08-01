#include "lists.h"
/**
 * free_listint_safe - frees the list
 * @h: input list
 * Return: size of the list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr = NULL, *ptr2 = NULL;
	int n = 0;

	if (!h || !*h)
		return (0);
	ptr2 = *h;
	while (ptr2)
	{
		ptr = ptr2;
		ptr2 = ptr2->next;
		free(ptr);
		n++;
	}
	*h = NULL;
	return (n);
}
