#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random valid passwORDS
 * Description:program that generate a random password
 * Return: allways (0)
 */
int main(void)
{
	int i;
	char b;

	srand(time(NULL));
	while (i <= 2645)
	{
		b = rand() % 120;
		i = i + b;
		putchar(b);
	}
	putchar(2772 - i);
	return (0);
}
