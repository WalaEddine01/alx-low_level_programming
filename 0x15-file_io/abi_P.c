#include "main.h"
/**
 * abi_P - prints the ABI version of an ELF header
 * @e:  pointer to an array containing the ELF ABI version
 */
void abi_P(unsigned char *e)
{
	printf(" ABI Version: %d\n",
		e[EI_ABIVERSION]);
}
