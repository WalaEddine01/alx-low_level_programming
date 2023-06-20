#include "main.h"
/**
 * main - entry point
 * description: prints _putchar word
 * Return: 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	for (int i = 0 ; i <= 8 ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
