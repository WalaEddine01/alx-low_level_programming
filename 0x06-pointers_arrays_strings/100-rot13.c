#include "main.h"
/**
 * rot13 - encode string using ROT13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *s)
{
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	char *p = s;

	while (*s != 0)
	{
		for (i = 0; i < 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (p);
}
