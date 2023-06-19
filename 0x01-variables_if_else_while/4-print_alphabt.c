#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabets except 'q' and 'e'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int le;

	for (le = 'a' ; le <= 'z' ; le++)
	{
		if (le == 'q' || le == 'e')
		{
		}
		else
		{
			putchar(le);
		}
	}
	putchar('\n');
	return (0);
}
