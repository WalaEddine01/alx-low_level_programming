#include <stdio.h>
/**
 * main - entry point
 * description: print alphabets in lower case then in upper case
 * Return: always 0 (success)
 */
int main(void)
{
	char le;

	for (le = 'a' ; le <= 'z' ; le++)
		putchar (le);
	for (le = 'A' ; le <= 'Z' ; le++)
		putchar (le);
	putchar ('\n');
	return (0);
}
