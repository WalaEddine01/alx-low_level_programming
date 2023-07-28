#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: head of the old node*
 * @str: the string of the new node
 * Return: the address of a new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h, *h2;

	h = malloc(sizeof(list_t));
	if (h == 0)
		return (0);
	h->str = strdup(str);
	h->len = strlen(str);
	if (*head == 0)
	{
		*head = h;
		return (*head);
	}
	h2 = *head;
	while (h2->next != 0)
	{
		h2 = h2->next;
	}
	h2->next = h;
	return (*head);
}
