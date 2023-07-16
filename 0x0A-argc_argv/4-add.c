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
	int i, j;
	char *p;

	j = 0;
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		for ( i = 0; p[i] != 0; i++)
		{
			if (p[i] < '0' || p[i] > '9')
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
