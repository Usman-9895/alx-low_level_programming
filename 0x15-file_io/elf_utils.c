#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "elf_utils.h"

int open_elf_file(char *filename)
{
    int o = open(filename, O_RDONLY);

    if (o == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
        exit(98);
    }

    return o;
}

Elf64_Ehdr *read_elf_header(int fd)
{
    Elf64_Ehdr *header = malloc(sizeof(Elf64_Ehdr));

    if (header == NULL)
    {
        close_elf_file(fd);
        dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
        exit(98);
    }

    ssize_t r = read(fd, header, sizeof(Elf64_Ehdr));

    if (r == -1)
    {
        free_elf_header(header);
        close_elf_file(fd);
        dprintf(STDERR_FILENO, "Error: Can't read ELF header\n");
        exit(98);
    }

    return header;
}

void free_elf_header(Elf64_Ehdr *header)
{
    free(header);
}

void close_elf_file(int fd)
{
    if (close(fd) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
        exit(98);
    }
}