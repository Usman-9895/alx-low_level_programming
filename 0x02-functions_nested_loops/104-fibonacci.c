
#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
unsigned long long int bef = 0;
unsigned long long int aft = 1;
unsigned long long int tmp;
int i;

for (i = 0; i < 100; i++)
{
printf("%llu, ", aft);
tmp = aft;
aft += bef;
bef = tmp;
}
printf("\n");
return (0);
}
