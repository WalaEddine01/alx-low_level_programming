#include "main.h"
#include <unistd.h>
/**
 * _abs -  computes the absolute value of an integer
 * @c: check sign and return the abs
 * Return: @c if + and @-c if -
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (-c);
	}
}
