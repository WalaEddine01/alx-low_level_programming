#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: head of the node*
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *h;

	if (head == 0)
		return;
	while (head != 0)
	{
		h = head;
		head = head->next;
		free(h->str);
		free(h);
	}
}
