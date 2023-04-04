#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
	char *q = accept;

	while (*q != '\0')
	{
	if (*p == *q)
	{
	return (p);
	}
	q++;
	}
	p++;
	}
	return (NULL);
}
