#include "main.h"

/**
 * print_diagonal - prints \ a draws a diagonal line in the terminal.
 *
 * @n: The number of line to draw
 * Return: empty
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	_putchar(92);
	_putchar('\n');
	}
	_putchar('\n');
	}
}
