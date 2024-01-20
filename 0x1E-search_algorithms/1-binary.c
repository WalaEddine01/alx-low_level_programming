#include "search_algos.h"
/**
* binary_search - this function uses the binary search
* to find an element in gived array
* @array: the input array
* @size: the size of the array
* @value: the value searched for
* Return: the value founded or -1 if didn't found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;
	size_t mid, i;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array:");
		for (i = left; i <= right; i++)
		{
			if (i < right)
			{
				printf(" %d,", array[i]);
			}
			else
			{
				printf(" %d\n", array[i]);
			}
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
