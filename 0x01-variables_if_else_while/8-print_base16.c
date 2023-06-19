#include <stdio.h>
/**
 * main - Entry point
 * Description: print single digit numbers of base 16 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48 ; n <= 57 ; n++)
	{
		putchar(n);
	}
	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
