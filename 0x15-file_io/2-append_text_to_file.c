#include "main.h"


/**
 * append_text_to_file - function that appends text
 * to existing file or new file
 * @filename: the name of the file
 * @text_content: text to append
 * Return: int
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int filed, words, length;

	length = 0;

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;
	}

	if (filename == NULL)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND, 0600);
	words = write(filed, text_content, length);

	if (filed == -1 || words == -1)
		return (-1);

	close(filed);

	return (-1);
}
