#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Ceci est la fonction main
 *
 * Return: always 0
 */
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("%d ", n);

if (n > 0)
printf("is positive\n");
else if (n == 0)
printf("is zero\n");
else
printf("is negative\n");

	/* your code goes there */
return (0);
}
