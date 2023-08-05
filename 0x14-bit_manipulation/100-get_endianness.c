#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	int i = 1;

	i >>= 1;
	if (!i)
		return (1);
	else
		return (0);
}
