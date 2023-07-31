#include "lists.h"
/**
 * sum_listint - Returns the sum of all data of list
 * @head: input list
 * Return: the sum of of all data
 */
int sum_listint(listint_t *head)
{
	int n = 0;
	listint_t *p;

	if (head == 0)
		return (0);
	p = head;
	while (p != 0)
	{
		n = n + p->n;
		p = p->next;
	}
	return (n);
}
