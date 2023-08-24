#include "main.h"
/**
 * magic_P - prints the magic numbers of an ELF header
 * @e: A pointer to an array containing the ELF magic numbers
 * Return: Nothing
 * Description: Magic numbers are separated by spaces
 */
void magic_P(unsigned char *e)
{
	int i;

	printf(" Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
