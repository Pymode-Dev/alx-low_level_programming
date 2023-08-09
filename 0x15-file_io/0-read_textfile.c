#include "main.h"


/**
 * read_textfile - Read any text file passed into it
 * @filename: the path to the directory file
 * @letters: the word to insert into to.
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filed, number, words;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer != NULL)
	{
		filed = open(filename, O_RDONLY);
		number = read(filed, buffer, letters);
		words = write(STDOUT_FILENO, buffer, number);

		if (filed == -1 || words == -1 || number == -1)
		{
			free(buffer);
			return (0);
		}

		free(buffer);
		close(filed);

		return (words);
	}
	else
		return (0);
}
