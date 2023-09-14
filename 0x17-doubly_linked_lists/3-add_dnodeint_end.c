#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @n: data
 * @head: pointer to the head of the list
 * Return: pointer to a new list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL, *ptr = NULL;

	tmp = malloc(sizeof(dlistint_t));
	if (!tmp || !head)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		ptr = *head;
		while (ptr && ptr->next)
			ptr = ptr->next;
		ptr->next = tmp;
		tmp->prev = ptr;
	}
	return (*head);
}
