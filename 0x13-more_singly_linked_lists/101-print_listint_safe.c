#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: input list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *p;

	if (head == NULL)
		exit(98);

	p = head;
	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		i++;
		if (p > p->next)
			p = p->next;
		else
		{
			printf("-> [%p] %d\n", (void *)p->next, p->next->n);
			break;
		}
	}
	return (i);
}
