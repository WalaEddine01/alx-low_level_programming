#include "main.h"
/**
 * _islower - return 1 if is lower case
 * @param c the first parameter
 * @return 1 if is lowercase
 * @return 0 otherwise
 */
int _islower(int c)
{
	_putchar(c);
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

