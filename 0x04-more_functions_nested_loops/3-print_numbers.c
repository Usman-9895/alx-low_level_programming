#include "main.h"
/**
 * print_numbers - display 0 - 9
 * i: is the char to be checked
 * Return: 1 result
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
