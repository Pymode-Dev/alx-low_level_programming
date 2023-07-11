#include "main.h"

int _strlen(char *str);

/**
 * _strlen - length
 * @str: the string
 * Return: int
 */

int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file - function that creates file
 * @filename: pointer to the function
 * @text_content: the text to write
 * Return: 1 if succeed -1 if fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, file, len;

	len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	file = write(fd, text_content, len);

	if (fd == -1 || file == -1)
		return (-1);

	close(fd);

	return (1);
}
