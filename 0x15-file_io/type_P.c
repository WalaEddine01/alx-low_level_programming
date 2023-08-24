#include "main.h"
/**
 * type_P - prints the type of an ELF header
 * @type_e: The ELF type
 * @e: pointer to an array containing the ELF class
 */
void type_P(unsigned int type_e, unsigned char *e)
{
	if (e[EI_DATA] == ELFDATA2MSB)
		type_e >>= 8;

	printf(" Type: ");

	switch (type_e)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type_e);
	}
}
