#include <stdio.h>
/**
 * main - entry point
 * description: print all alphabets expect q and e
 * return: always 0 (success)
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
