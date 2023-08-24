#include "main.h"
/**
 * elf_checking - Checks if a file is an ELF file
 * @e: A pointer to an array containing the ELF magic numbers
 * Return: nothing
 * Description: If is not an ELF file exit with (98)
 */
void elf_checking(unsigned char *e)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e[i] != 127 && e[i] != 'E' && e[i] != 'L' && e[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
