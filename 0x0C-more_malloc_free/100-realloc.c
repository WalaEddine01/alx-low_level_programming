#include "main.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocates
 * @old_size: size of the allocated space for ptr
 * @new_size: new size in hytes of new memory block
 * Return: pointer to the new memory blick
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size > old_size)
	{
		p = malloc(old_size);
		if (p == 0)
			return (0);
		memcpy(p, ptr, old_size);
		free(ptr);
		return (p);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
	{
		p = malloc(new_size);
		if (p == 0)
			return (0);
		return (p);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
}
