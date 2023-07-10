#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: the pointer to the filename
 * @letters: the number of letters to read and print;
 * Return: ssize_t
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num;
	ssize_t w;
	char *buff;

	if (filename == NULL || letters < 1)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	num = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, num);

	if (fd == -1 || w == -1 || num == -1)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (w);
}
