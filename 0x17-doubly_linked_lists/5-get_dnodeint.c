#include "lists.h"
/**
 * get_dnodeint_at_index - return the node in the index
 * @index: the index of the node
 * @head: pointer to the list
 * Return: the node in the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (i < index && head && head->next)
	{
		head = head->next;
		i++;
	}
	if (i < index)
		return (NULL);
	return (head);
}
