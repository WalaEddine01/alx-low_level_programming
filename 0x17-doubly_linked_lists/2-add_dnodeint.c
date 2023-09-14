#include "lists.h"
/**
 * add_dnodeint - adds a node at the beggining of the list
 * @n: the DATA of the new node
 * @head: the pointer to the list
 * Return: the new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		tmp = malloc(sizeof(dlistint_t));
		tmp->n = n;
		tmp->next = NULL;
		tmp->prev = NULL;
		tmp->next = *head;
		(*head)->prev = tmp;
		*head = tmp;
	}
	return (*head);
}
