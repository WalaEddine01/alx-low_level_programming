#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: string input
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
