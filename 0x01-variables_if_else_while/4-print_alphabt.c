#include <stdio.h>

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
