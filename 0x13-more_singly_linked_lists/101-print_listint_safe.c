#include "lists.h"
/**
 * print_listint_safe - prints linked list
 * @head: input list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	if (head == NULL)
		return (i);
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		if (head > head->next)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			i++;
			break;
		}
	}
	return (i);
}
