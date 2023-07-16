#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two positive numbers
 * @argc: count command line arg
 * @argv: array command line-arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, k;
	char *p;

	j = 0;
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		for ( k = 0; p[k] != 0; k++)
		{
			if (p[k] < '0' || p[k] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		j = j + atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
