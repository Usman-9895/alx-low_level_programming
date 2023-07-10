#ifndef ELF_UTILS_H
#define ELF_UTILS_H

#include <elf.h>

int open_elf_file(char *filename);
void close_elf_file(int fd);

#endif /* ELF_UTILS_H */