#include "main.h"
/**
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, n1;

	i = 0;
	j = 0;
	while (src[i] != 0 && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != 0 && i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
