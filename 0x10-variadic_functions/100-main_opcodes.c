#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 or 2 on failure
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *opcode;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}

	opcode = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x ", opcode[i] & 0xff);
	}

	printf("\n");

	return (0);
}
