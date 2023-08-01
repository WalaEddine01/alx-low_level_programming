#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: list input
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == 0 || head == 0)
		return (0);

	ptr = *head;
	*head = (*head)->next;
	i = ptr->n;
	free(ptr);
	return (i);
}
