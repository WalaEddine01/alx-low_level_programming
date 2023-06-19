#include <stdio.h>
/**
 * main - entry point
 * Descriotion: print all charecters of alphabets
 * Return: always 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'z' ; le >= 'a' ; le--)
		putchar(le);
	putchar('\n');
	return (0);
}

