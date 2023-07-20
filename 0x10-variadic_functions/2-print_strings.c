#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char*);
		if (x)
			printf("%s", x);
		else
			printf("(nil)");
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
