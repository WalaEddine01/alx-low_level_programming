#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: intput list
 * @n: integer input
 * Return: address of a new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == 0)
		return (0);
	h->n = n;
	if (*head != 0)
	{
		h->next = *head;
		*head = h;
	}
	else
		*head = h;
	return (*head);
}
