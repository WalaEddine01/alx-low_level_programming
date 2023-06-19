#include <stdio.h>
/**
 * main - Entry point
 * Description: print all possible combination of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int la, le;

	for (la = 48 ; la <= 56 ; la++)
	{
		for (le = 49 ; le <= 57 ;le++ )
		{
			if (la != le)
			{
			putchar(la);
			putchar(le);
			}
			if (la != 8 || le != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
