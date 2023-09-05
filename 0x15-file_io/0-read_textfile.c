#include "main.h"
/**
 * read_textfile - Read a text file and print it to the POSIX standard output.
 * @filename: A pointer to the file.
 * @letters: The number of letters it should read and print
 * Return: Returns the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	char *bf;
	ssize_t read_byte, write_byte;

	if (filename == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);

	bf = malloc(sizeof(char) * letters);
	if (bf == NULL)
	{
		close(ptr);
		return (0);
	}
	read_byte = read(ptr, bf, letters);
	if (read_byte == -1)
	{
		close(ptr);
		return (0);
	}
	write_byte = write(STDOUT_FILENO, bf, read_byte);
	if (write_byte != read_byte)
	{
		return (0);
	}
	close(ptr);
	free(bf);
	return (write_byte);
}
