#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data of the list
 * @head: pointer to the list
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int a = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		a = a + head->n;
		head = head->next;
	}
	return (a);
}
