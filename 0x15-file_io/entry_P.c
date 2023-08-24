#include "main.h"
/**
 * entry_P - prints the entry point of an ELF header
 * @entry_e: The address of the ELF entry point
 * @e: pointer to an array containing the ELF class
 */
void entry_P(unsigned long int entry_e, unsigned char *e)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry_e = ((entry_e << 8) & 0xFF00FF00) |
			  ((entry_e >> 8) & 0xFF00FF);
		entry_e = (entry_e << 16) | (entry_e >> 16);
	}

	if (e[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_e);

	else
		printf("%#lx\n", entry_e);
}
