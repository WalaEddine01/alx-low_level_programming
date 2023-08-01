#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: input list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;
	listint_t *p;

	p = head;
	if (head == 0)
	{
		exit(98);
	}
	while (p != 0)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		p = p->next;
		i++;
	}
	return (i);
}
