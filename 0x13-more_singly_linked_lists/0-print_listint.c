#include "lists.h"
/**
 * print_listint - prints all elements of list
 * @h: input list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *p;

	if (h == 0)
		return (0);
	p = h;
	while (p != 0)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
