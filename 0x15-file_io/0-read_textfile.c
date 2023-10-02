#include "main.h"

/**
 * read_textfile - To read a text file and print to the stdout.
 * @filename: The file descriptor.
 * @letters: The number of letters that should be read and printed.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int descriptor;
	ssize_t byte_read, byte_write;
	char *buf;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	byte_read = read(descriptor, buf, letters);
	if (byte_read == -1)
	{
		close(descriptor);
		free(buf);
		return (0);
	}

	byte_write = write(STDOUT_FILENO, buf, byte_read);
	if (byte_write == -1 || byte_write != byte_read)
	{
		close(descriptor);
		free(buf);
		return (0);
	}

	close(descriptor);
	free(buf);
	return (byte_read);
}
