/**
 * add - Adds two integers
 * @x: First integer
 * @y: Second integer
 * Return: Sum of x and y
 */
int add(int x, int y)
{
	return (x + y);
}
/**
 * sub - Subtracts two integers
 * @x: First integer
 * @y: Second integer
 * Return: Difference of x and y
 */
int sub(int x, int y)
{
	return (x - y);
}
/**
 * mul - Multiplies two integers
 * @x: First integer
 * @y: Second integer
 * Return: Product of x and y
*/
int mul(int x, int y)
{
	return (x * y);
}
/**
 * div - Divides two integers
 * @x: First integer
 * @y: Second integer
 * Return: Quotient of x and y
*/
float div(float x, float y)
{
	if (y != 0)
	{
		return (x / y);
	}
	else
	{
		return (-1);
	}
}
