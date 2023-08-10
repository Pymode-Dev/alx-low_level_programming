#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void close_file(int filed)
{
	int f;
	f = close(filed);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: can;t close fd %d\n", f);
		exit(100);
	}
}


int main(int ac, char *argv[])
{
	int file_from, file_to, reader, writer;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = (char *)malloc(BUFFER_SIZE * sizeof(char));

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}

	file_from = open(argv[1], O_RDONLY);
	reader = read(file_from, buffer, BUFFER_SIZE);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (reader > 2)
	{
		if (file_from == -1 || reader == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
			exit(98);
		}

		writer = write(file_to, buffer, reader);


		if (file_to == -1 || writer == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reader = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_file(file_from);
	close_file(file_to);

	return (0);
}
