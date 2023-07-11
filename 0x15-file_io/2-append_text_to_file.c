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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the pointer to filename
 * @text_content: the pointer to text to append
 * Return: 1 if sucess or -1 if fails
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, file, length;

	length = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, 0600);
	file = write(fd, text_content, length);

	if (fd == -1 || file == -1)
		return (-1);

	close(fd);

	return (1);
}
