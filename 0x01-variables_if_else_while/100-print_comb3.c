#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
int i, j, k;

for (i = 0; i <= 8; i++)
{
for (j = i + 1; j <= 9; j++)
{
k = i * 10 + j;
putchar((k / 10) + '0');
putchar((k % 10) + '0');
if (k < 89)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}

