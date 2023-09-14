#include "lists.h"
/**
 * add_dnodeint - adds a node at the beggining of the list
 * @n: the DATA of the new node
 * @head: the pointer to the list
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = NULL;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL || head == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (*head);
}
