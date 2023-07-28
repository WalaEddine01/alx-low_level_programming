#include "lists.h"
/**
 * list_len - returns the number of elements in list
 * @h: input list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;
	const list_t *head;

	head = h;
	while (head != 0)
	{
		head = head->next;
		i++;
	}
	return (i);
}
