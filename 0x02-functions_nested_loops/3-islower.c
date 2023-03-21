#include "main.h"


/**
* _islower 
*  La fonction vérifie les caractaire minuscule
* Return: 1 si la chaine de caractaire est miniscule, sinon 0.
*/


int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
