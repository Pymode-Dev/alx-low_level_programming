#include "main.h"


/**
 * create_file - function that creates a file.
 * @filename: the name of the file
 * @text_content: what will be stored in the file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int filed, words, length;

	length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	filed = open(filename, O_CREAT | O_RDWR | OTRUNC, 0600);
	words = write(filed, text_content, length);

	if (filed == -1 || word == -1)
		return (-1);

	close(fd);
	return (1);
}
