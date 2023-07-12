#include "main.h"
#include <stddef.h>
#include <unistd.h>

/**
 * create_file - function that creates a file
 * @filename: pointer that points to the text
 * @text_content: a pointer to str content
 * Return: success(0), failure(-1) 
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)

			length = write(fd, text_content, i);
		if (length == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
