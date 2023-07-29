#include "main.c"
/**
 * main - multiplies two positive numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int mul, num1, num2;

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
	while (*argv[1] != 0)
	{
		if (*argv[1] < '0' || *argv[1] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		argv[1]++;
	}
	while (*argv[2] != 0)
	{
		if (*argv[2] < '0' || *argv[2] > '9')
		{
			printf("Error\n");
			exit(98);
		}
		argv[2]++;
	}
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
