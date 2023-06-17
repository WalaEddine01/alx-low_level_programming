#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print if the Last digit of n
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n / 10;
	a = n - (a * 10);
	if (a < 0)
	{a = a * -1;
	if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, a);
	} else if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
