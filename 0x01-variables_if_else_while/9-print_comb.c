#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combination of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int le, la;

	for (le = 48 ; le <=57 ; le++)
	{
		for (la = 48 ; la <=57 ; la++)
		{
			putchar(le);
			putchar(la);
			if (le != 57 || la != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
