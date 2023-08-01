#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: intput list
 * @n: integer input
 * @idx: the index of the node
 * Return: address of a new element or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h, *ptr;
	unsigned int i = 0;

	ptr = *head;
	h = malloc(sizeof(listint_t));
	if (h == 0)
		return (*head);
	h->n = n;
	h->next = 0;
	if (idx != 0)
	{
		if (*head != 0)
		{
			while (i < idx - 1 && ptr != 0)
			{
				ptr = ptr->next;
				i++;
			}
			if (ptr == 0)
			{
				free(h);
				return (NULL);
			}
			h->next = ptr->next;
			ptr->next = h;
			return (h);
		}
		else
		{
			free(h);
			return (NULL);
		}
	}
	h->next = *head;
	*head = h;
	return (h);
}
