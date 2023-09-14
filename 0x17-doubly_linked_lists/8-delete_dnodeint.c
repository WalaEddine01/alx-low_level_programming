#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the the node on the index
 * @index: the index of the node
 * @head: the pointer to the list
 * Return: 1 if it works -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp2, *tmp = *head;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		(*head) = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		tmp = NULL;
		return (1);
	}
	while (index > 0)
	{
		if (*head == NULL)
			return (-1);
		*head = (*head)->next;
		index--;
	}
	if ((*head)->next == NULL)
	{
		tmp2 = (*head)->prev;
		tmp2->next = NULL;
		free(*head);
		*head = tmp;
		return (1);
	}
	tmp2 = (*head)->prev;
	tmp2->next = (*head)->next;
	(*head)->next->prev = tmp2;
	free(*head);
	*head = tmp;
	return (1);
}
