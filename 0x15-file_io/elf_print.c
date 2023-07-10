#include <stdio.h>
#include "elf_header.h"
#include "elf_print.h"

void print_magic(unsigned char *e_ident)
{
    int index;

    printf(" Magic: ");

    for (index = 0; index < EI_NIDENT; index++)
    {
        printf("%02x", e_ident[index]);

        if (index == EI_NIDENT - 1)
            printf("\n");
        else
            printf(" ");
    }
}

void print_class(unsigned char *e_ident)
{
    // ...
}

void print_data(unsigned char *e_ident)
{
    // ...
}

void print_version(unsigned char *e_ident)
{
    // ...
}

void print_osabi(unsigned char *e_ident)
{
    // ...
}

void print_abi(unsigned char *e_ident)
{
    // ...
}

void print_type(unsigned int e_type, unsigned char *e_ident)
{
    // ...
}

void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
    // ...
}