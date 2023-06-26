#include "main.h"
/**
 * rev_string - revers a string
 * @s: string input
 * don't return
 */
void rev_string(char *s)
{
	int i, a, j;

	j = 0;
	a = 0;
	i = 0;
	while (s[i] != 0)
	{
		a++;
		i++;
	}
	while (i--)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		j++;
	}
}
