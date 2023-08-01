#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: input list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0;

	if (head == 0)
	{
		exit(98);
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		if (head > head->next)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
