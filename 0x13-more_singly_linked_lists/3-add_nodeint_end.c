#include "lists.h"
/**
 * add_nodeint_end - adding a new node at the end of a list
 * @head: input list
 * @n: input data
 * Return: address of a new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptr2;

	ptr2 = malloc(sizeof(listint_t));
	if (ptr2 == 0)
		return (*head);
	ptr2->n = n;
	ptr2->next = 0;

	if (*head != 0)
	{
		ptr = *head;
		while (ptr->next != 0)
		{
			ptr = ptr->next;
		}
		ptr->next = ptr2;
	}
	else
		*head = ptr2;
	return (*head);
}
