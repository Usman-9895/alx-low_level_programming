/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to a string to search.
 * @accept: pointer to a string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
	found = 0;
	for (char *a = accept; *a != '\0'; a++)
	{
		if (*s == *a)
		{
		count++;
		found = 1;
		break;
	}
	}
	if (!found)
	{
		return (count);
	}
	s++;
	}

	return (count);
}
