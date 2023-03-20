#include <stdio.h>
#include <stdbool.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
int i, j, k;
bool next = false;
for (i = '0'; i <= '7'; i++)
{
for (j = i + 1; j <= '8'; j++)
{
for (k = j + 1; k <= '9'; k++)
{
if (next)
{
putchar(',');
putchar(' ');
}
next = true;
putchar(i);
putchar(j);
putchar(k);
}
}
}
putchar('\n');
return (0);
}
