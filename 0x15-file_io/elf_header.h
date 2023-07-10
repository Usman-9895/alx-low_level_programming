#ifndef ELF_HEADER_H
#define ELF_HEADER_H

#include <elf.h>

int open_elf_file(char *filename);
Elf64_Ehdr *read_elf_header(int fd);
void free_elf_header(Elf64_Ehdr *header);
void close_elf_file(int fd);

#endif /* ELF_HEADER_H */