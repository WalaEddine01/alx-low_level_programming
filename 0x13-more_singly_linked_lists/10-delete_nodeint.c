#include "lists.h"
/**
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *ptr2;
	unsigned int i = 0;

	ptr = *head;
	if (index != 0)
	{
		if (head != 0)
		{
			while (i < index - 1)
			{
				if (ptr->next != 0)
				{
					ptr = ptr->next;
					i++;
				}
				else
					return (-1);
			}
			ptr2 = ptr->next;
			if (ptr2 == 0)
				return (-1);
			ptr->next = ptr2->next;
			free(ptr2);
			return (1);
		}
		else
			return (-1);
	}
	*head = (*head)->next;
	free(ptr);
	return (1);
}
