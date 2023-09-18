/**
 * mod - returns the mod of two numbers
 * @x: First integer
 * @y: Second integer
 * Return: modular of x and y
*/
int mod(int x, int y)
{
        if (y != 0)
        {
                return (x % y);
        }
        else
        {
                return (-1);
        }
}
