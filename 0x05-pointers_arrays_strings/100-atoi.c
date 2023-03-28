#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no number is found
 */

int _atoi(char *s)
{
    int sign = 1, num = 0;
    char c;

    while (*s)
    {
        c = *s++;
        if (c == '-')
            sign *= -1;
        else if (c >= '0' && c <= '9')
            num = num * 10 + (c - '0');
        else if (num > 0)  /* stop parsing if we've already found a number */
            break;
    }

    return sign * num;
}
