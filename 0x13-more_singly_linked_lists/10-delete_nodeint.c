#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a list
 * @index: the index of node
 * @head: list inputo
 * Return: 1 if it succeeded 0 i not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head, *ptr2 = NULL;
	unsigned int i = 0;

	if (!head || *head)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL && i < index)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		i++;
	}
	if (ptr == NULL)
		return (-1);
	ptr2->next = ptr->next;
	free(ptr);
	return (1);
}
