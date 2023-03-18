#include <stdio.h>

/**
 * main - Ceci est la fonction main
 *
 * Return: always 0
 */

int main(void)
{
int i, j, k;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 10; j++)
{
k = i * 10 + j;
if (k != 89)
{
putchar((k / 10) + '0');
putchar((k % 10) + '0');
putchar(',');
putchar(' ');
}
else
{
putchar((k / 10) + '0');
putchar((k % 10) + '0');
}
}
}
putchar('\n');

return (0);
}
