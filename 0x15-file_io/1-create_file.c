#include "main.h"


/**
 * create_file - function that creates file
 * @filename: pointer to the function
 * @text_content: the text to write
 * Return: 1 if succeed -1 if fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	file = write(fd, text_content, sizeof(text_content));

	if (fd == -1 || file == -1)
		return (-1);

	close(fd);

	return (1);
}
