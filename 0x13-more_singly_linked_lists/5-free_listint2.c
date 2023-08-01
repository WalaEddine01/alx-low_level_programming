#include "lists.h"
/**
 * free_listint2 - frees the list and sets the head to 0
 * @head: input list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr2;

	if (!*head || !head == NULL)
		return;

	ptr2 = *head;
	while (ptr2)
	{
		ptr = ptr2;
		ptr2 = ptr2->next;
		free(ptr);
	}
	head = NULL;
	*head = NULL;
}
