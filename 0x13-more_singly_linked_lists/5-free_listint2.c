#include "lists.h"
/**
 * free_listint2 - frees the list and sets the head to 0
 * @head: input list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

		while (*head != NULL)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
		*head = 0;
}
