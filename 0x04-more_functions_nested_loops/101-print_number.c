#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int digit, divisor = 1;

	if (n < 0)
	{
	_putchar('-');
	n *= -1;
	}
	while (n / divisor > 9)
	{
	divisor *= 10;
	}

	while (divisor != 0)
	{
	digit = n / divisor;
	_putchar(digit + '0');
	n %= divisor;
	divisor /= 10;
	}
	if (n == 0)
	{
	_putchar('0');
	}
}

