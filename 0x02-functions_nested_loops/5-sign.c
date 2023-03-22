#include "main.h"

/**
 * print_sign - imprime le signe d'un nombre
 * @n : l'entier à vérifier
 * Renvoie : 1 et imprime + si n est supérieur à zéro
 * 0 et imprime 0 si n vaut zéro
 * -1 et imprime - si n est inférieur à zéro
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else if (n < 0)
{
_putchar('-');
}
return (-1);
}
