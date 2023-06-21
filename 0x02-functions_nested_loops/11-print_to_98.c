#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: input
 * Return: don't return
 */
void print_to_98(int n)
{
	int i;

	printf("%d", n);
	printf(", ");
	if (i < n)
	{
		for (i = n + 1 ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n - 1 ; i > 98 ; i--)
		{
			printf("%d", i);
			if (i < 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}

