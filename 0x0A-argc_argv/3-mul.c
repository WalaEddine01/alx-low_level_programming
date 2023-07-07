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

	(void)argc;
	i = atoi(argv[2]) * atoi(argv[1]);
	printf("%d\n", i);

	return (0);
}
