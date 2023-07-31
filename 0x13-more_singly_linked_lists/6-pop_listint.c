#include "lists.h"
/**
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	ptr = *head;
	*head = (*head)->next;
	i = ptr->n;
	free(ptr);
	return (i);
}
