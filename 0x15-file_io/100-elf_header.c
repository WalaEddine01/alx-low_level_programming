#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ver_P(unsigned char *e);
void abios_P(unsigned char *e);
void data_P(unsigned char *e);
void class_P(unsigned char *e);
void magic_P(unsigned char *e);
void abi_P(unsigned char *e);
void type_P(unsigned int type_e, unsigned char *e);
void entry_P(unsigned long int entry_e, unsigned char *e);
void elf_C(int elf);
void elf_checking(unsigned char *e);

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
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
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
/**
 * entry_P - prints the entry point of an ELF header
 * @entry_e: The address of the ELF entry point
 * @e: pointer to an array containing the ELF class
 */
void entry_P(unsigned long int entry_e, unsigned char *e)
{
	printf(" Entry point address: ");

	if (e[EI_DATA] == ELFDATA2MSB)
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

/**
 * abi_P - prints the ABI version of an ELF header
 * @e:  pointer to an array containing the ELF ABI version
 */
void abi_P(unsigned char *e)
{
	printf(" ABI Version: %d\n", e[EI_ABIVERSION]);
}
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
/**
 * abios_P - prints the OS/ABI of an ELF header
 * @e: pointer to an array containing the ELF version
 */
void abios_P(unsigned char *e)
{
	printf(" OS/ABI: ");

	switch (e[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e[EI_OSABI]);
	}
}
/**
 * data_P - prints the data of an ELF header
 * @e: pointer to an array containing the ELF class
 */
void data_P(unsigned char *e)
{
	printf(" Data: ");

	switch (e[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e[EI_CLASS]);
	}
}

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file
 * @ac: The number of arguments supplied to the program
 * @av: An array of pointers to the arguments
 * Return: 0 on success
 *
 * Description: If the file is not an ELF File or
 * the function fails exit code 98
 */
int main(int ac, char *av[])
{
	Elf64_Ehdr *head;
	int op, re;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	op = open(av[1], O_RDONLY);
	if (op == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]);
		elf_C(op);
		exit(98);
	}
	re = read(op, head, sizeof(Elf64_Ehdr));
	if (re == -1)
	{
		free(head);
		elf_C(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", av[1]);
		exit(98);
	}

	elf_checking(head->e_ident);
	printf("ELF Header:\n");
	magic_P(head->e_ident);
	class_P(head->e_ident);
	data_P(head->e_ident);
	ver_P(head->e_ident);
	abios_P(head->e_ident);
	abi_P(head->e_ident);
	type_P(head->e_type, head->e_ident);
	entry_P(head->e_entry, head->e_ident);

	free(head);
	elf_C(op);
	return (0);
}
