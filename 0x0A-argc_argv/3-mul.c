#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: count command line arg
 * @argv: array command line-arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 3 || argc == 1
			|| (atoi(argv[1]) < '0' && atoi(argv[1]) > '9')
			|| (atoi(argv[2]) < '0' && atoi(argv[2]) > '9'))
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[2]) * atoi(argv[1]);
	printf("%d\n", i);

	return (0);
}
