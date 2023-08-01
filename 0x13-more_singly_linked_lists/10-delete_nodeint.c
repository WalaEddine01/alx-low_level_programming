#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @index: the index of node
 * @head: list inputo
 * Return: 1 if it succeeded 0 i not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *prev = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL && i < index)
	{
		prev = ptr;
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (-1);
	prev->next = ptr->next;
	free(ptr);
	return (1);
}
