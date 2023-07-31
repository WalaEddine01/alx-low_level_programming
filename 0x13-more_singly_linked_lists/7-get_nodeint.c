#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: list input
 * @index: the index of the nth node
 * Return: the address of the nth node or 0 if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int n = index, i = 0;

	if (head)
	{
		ptr = head;
		for (i = 0; i < n; i++)
		{
			if (ptr)
			{
				ptr = ptr->next;
			}
			else
				return (0);
		}
		return (ptr);
	}
	else
		return (0);
}
