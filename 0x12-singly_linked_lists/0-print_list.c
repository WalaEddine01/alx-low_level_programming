#include "lists.h"
/**
 * print_list - prints all the elements of list_t
 * @h: input list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *head;

	head = h;
	while (head != 0)
	{
		if (head->str == 0)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", head->len, head->str);
		}
		head = head->next;
		i++;
	}
	return (i);
}
