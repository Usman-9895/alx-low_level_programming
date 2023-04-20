#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char c, *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (s)
					printf("%s", s);
				else
					printf("(nil)");
				break;
			default:
				break;
		}

		if (format[i + 1])
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
