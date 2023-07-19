#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array input
 * @size: the size of an array
 * @cmp: function pointer
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, a;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			a = cmp(array[i]);
			if (a)
				return (i);
		}
	}
	return (-1);
}
