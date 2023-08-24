#include "main.h"
/**
 * class_P - Prints the class of an ELF header
 * @e: A pointer to an array containing the ELF class
 * Return: NOTHING
 */
void class_P(unsigned char *e)
{
	printf(" Class: ");

	switch (e[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}
