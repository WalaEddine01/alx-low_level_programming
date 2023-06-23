#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Description: prints the numbers from 1 to 100 and print fizz buzz
 * Return: always 0
 */
int main(void)
{
	int i, a, k;

	for (i = 0; i <= 100; i++)
	{
		a = i % 3;
		k = i % 5;
		if (a == 0 && k == 0)
			printf("FizzBuzz ");
		else
		{
			if (a == 0)
				printf("Fizz ");
			else
			{
				if (k == 0)
					printf("Buzz ");
				else
					printf("%d ", i);
			}
		}
	}
	printf("\n");
	return (0);
}
