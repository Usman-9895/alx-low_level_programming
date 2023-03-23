
#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main() {
int i, a = 1, b = 2, c;
printf("%d, %d, ", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf("%d, ", c);
a = b;
b = c;
}
c = a + b;
printf("%d\n", c);
return (0);
}
