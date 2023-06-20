#include "main.h"
/**
 * _islower - return 1 if 'c' is lowercase
 * description: return 1 if is lowercase
 * @c the first parameter
 * return: 1 if 'c' is lowercase return: 0 (success) otherwise
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

