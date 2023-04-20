/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: the function to be used to compare values
 *
 * Return: the index of the first element for which the cmp function does not return 0,
 * or -1 if no element matches or size is <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	int i;

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
		return (i);
	}

	return (-1);
}
