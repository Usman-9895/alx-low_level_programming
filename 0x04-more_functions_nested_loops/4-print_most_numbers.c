#include "main.h"
/**
 * print_most_numbers - display 0 - 9 Do not print 2 and 4
 * i: is the char to be checked
 * Return: 1 result
*/

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}
