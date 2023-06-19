#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combination of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int la;

	for (la = 48 ; la <= 57 ; la++)
	{
		putchar(la);
		if (la != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
