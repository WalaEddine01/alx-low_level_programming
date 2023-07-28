#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: head of the node*
 * Return: Nothing
 */
void free_list(list_t *head)
{
	if (head == 0)
		return;
	free(*head);
}
