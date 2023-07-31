#include "lists.h"
/**
 * reverse_listint - that reverses a listint_t linked list.
 * @head:input list
 * Return: the address to a new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = 0, *next_n = 0;

	while (*head != 0)
	{
		next_n = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next_n;
	}
	*head = prev;
	return (*head);
}
