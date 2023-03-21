#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when successfull
 */
int main(void)
{
char str[] = "_putchar";
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}

putchar('\n');
return (0);
}
