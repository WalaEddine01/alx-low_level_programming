#include "main.h"
/**
 * elf_C - closes an ELF file
 * @elf: The file descriptor of the ELF file
 * Return: NOTHING
 * Description: If the file cannot be closed exit code 98
 */
void elf_C(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
