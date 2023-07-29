#include "main.h"
/**
 * main - multiplies two positive numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int mul, num1, num2;
	char *str, *str2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '-' || argv[1][0] == '-')
	{
		printf("Error\n");
		exit(98);
	}
	str = argv[1];
	str2 = argv[2];
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			printf("Error\n");
			exit(98);
		}
		str++;
	}
	while (*str2 != '\0')
	{
		if (*str2 < '0' || *str2 > '9')
		{
			printf("Error\n");
			exit(98);
		}
		str2++;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
