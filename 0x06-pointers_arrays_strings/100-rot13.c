#include "main.h"
/**
 * rot13 - encode string using ROT13
 * @a: input string
 * Return: encoded string
 */
char *rot13(char *a)
{
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;

	while (*s != 0)
	{
		for (i; i < 52; i++)
		{
			if (*s == rot13[i])
			{
				*s = ROT13[i];
				break;
			}
		}
		s++;
	}
	return (s);
}
