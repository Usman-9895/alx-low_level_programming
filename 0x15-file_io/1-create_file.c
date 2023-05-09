#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file and writes a string to it
 * @filename: name of the file to create
 * @text_content: string to write to the file (NULL terminated)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ret = 1, len = 0;

		if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;

		ret = write(fd, text_content, len);
		if (ret == -1)
		ret = -1;
	}
	close(fd);

	return (ret);
}
