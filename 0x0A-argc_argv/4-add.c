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

	j = 0;
	for (i = 0; i < argc; i++)
	{
		j = j + atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
