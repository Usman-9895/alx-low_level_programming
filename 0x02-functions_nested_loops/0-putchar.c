#include <stdio.h>
#include <stdlib.h>

int main(void)
{
const char* str = "_putchar";
for (int i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
putchar('\n');
return (0);
}
