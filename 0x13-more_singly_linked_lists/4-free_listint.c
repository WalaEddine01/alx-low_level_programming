#include "lists.h"
/**
 * free_listint - frees the list
 * @head: input list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
