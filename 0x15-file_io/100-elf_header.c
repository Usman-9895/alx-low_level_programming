#include <stdio.h>
#include <stdlib.h>
#include "elf_header.h"
#include "elf_checks.h"
#include "elf_print.h"
#include "elf_utils.h"

int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int o;

    o = open_elf_file(argv[1]);
    header = read_elf_header(o);

    check_elf(header->e_ident);
    printf("ELF Header:\n");
    print_magic(header->e_ident);
    print_class(header->e_ident);
    print_data(header->e_ident);
    print_version(header->e_ident);
    print_osabi(header->e_ident);
    print_abi(header->e_ident);
    print_type(header->e_type, header->e_ident);
    print_entry(header->e_entry, header->e_ident);

    free_elf_header(header);
    close_elf_file(o);
    return 0;
}