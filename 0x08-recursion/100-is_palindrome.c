#include "main.h"
#include <string.h>
/**
 * is_palindrome - check if the string is palindrome
 * @s: input string
 * Return: 1 if @s is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	if (length <= 1)
		return (1);
	return (is_palindrome2(s, 0, length - 1));
}
/**
 * is_palindrome2 - aux function
 * @s: input srtring
 * @start: first index of a string
 * @end: last index of a string
 * Return: 1 if @s is palindrome, 0 if not
 */
int is_palindrome2(char *s, int start, int end)
{
	if (start == end)
		return (1);
	if (s[start] == s[end])
		return (is_palindrome2(s, start + 1, end - 1));
}
