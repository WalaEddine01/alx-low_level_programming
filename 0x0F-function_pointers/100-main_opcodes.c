#include "function_pointers.h"
/**
 */
int main(int args, char **argv)
{
	int i, a;
	unsigned char *p;

	p = (unsigned char *)main;
	if (args != 2)
		printf("Error\n"), exit(1);
	a = atoi(argv[1]);
	if (a < 0)
		printf("Error\n"), exit(2);
	for (i = 0; i < a; i++)
	{
		if (i != a - 1)
			printf("%02hhx ", *p);
		else

			printf("%02hhx", *p);
		p++;
	}
	printf("\n");
	return (0);
}
