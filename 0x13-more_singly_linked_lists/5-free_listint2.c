#include "lists.h"
/**
 * free_listint2 - frees the list and sets the head to 0
 * @head: input list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr2 = *head;

	if (*head)
	{
		while (*ptr2 != NULL)
		{
			ptr = ptr2;
			ptr2 = ptr2->next;
			free(ptr);
		}
		*head = 0;
	}
}
