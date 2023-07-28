#include "lists.h"
/**
 * add_node - adds a new node at the beg of a list_t
 * @head: head of the old node*
 * @str: the string of the new node
 * Return: the address of a new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == 0)
		return (0);
	h->str = strdup(str);
	h->len = _strlen(str);
	h->next = *head;
	*head = h;
	return (*head);
}
