#include "main.h"
/**
 * ver_P - prints the version of an ELF header
 * @e: pointer to an array containing the ELF version
 */
void ver_P(unsigned char *e)
{
	 printf(" Version: %d", e[EI_VERSION]);

	switch (e[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
