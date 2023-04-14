#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	/* Check for zero inputs */
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	/* Allocate memory using malloc */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
	return (NULL);
	}

	/* Set memory to zero */
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
