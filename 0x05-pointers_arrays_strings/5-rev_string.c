#include "main.h"
/**
 * rev_string - revers a string
 * @s: string input
 * don't return
 */
void rev_string(char *s)
{
	int i, a, j;
	char w;

	j = 0;
	a = 0;
	i = 0;
	while (s[i] != 0)
	{
		a++;
		i++;
	}
	a = a / 2;
	for (i = 0 ;i > a; i++)
	{
		w = s[i];
		s[i] = s[j];
		s[j] = w;
		j++;
	}
}
