#include "search_algos.h"
/**
* linear_search - this function uses the linear search
* to find an element in gived array
* @array: the input array
* @size: the size of the array
* @value: the value searched for
* Return: the value founded or -1 if didn't found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
