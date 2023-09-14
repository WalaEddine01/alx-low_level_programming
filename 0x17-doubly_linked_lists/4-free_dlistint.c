#include "lists.h"
/**
 * free_dlistint - frees the list
 * @head: pointer to the dlist
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;
	if (head == NULL)
		free(head);
	else
	{
		ptr = head;
		while (head && head->next)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
		free(head);
	}
}
