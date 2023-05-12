#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

/**
 * print_error - Prints an error message and exits with status code 98
 *
 * @message: The error message to print
 */
void print_error(char *message)
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

/**
 * main - Entry point
 *
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, otherwise exits with status code 98
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;
	int i;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error(strerror(errno));

	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Could not read ELF header");

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
		print_error("File is not an ELF file");

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < SELFMAG; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
	printf("  Version:                           %d (current)\n",
	       header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
	printf("  ABI Version:                       %d\n",
	       header.e_ident[EI_ABIVERSION]);
	printf("  Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
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
		printf("Unknown\n");
		break;
	}
	printf("  Entry point address:               0x%lx\n", header.e_entry);

	if (close(fd) == -1)
		print_error(strerror(errno));

	return (0);
}
