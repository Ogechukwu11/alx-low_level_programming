#include "main.h"

/**
 * error_exit - A function that write error message
 * @message: The error message
 * @filename: The name of the file
 * @exit_code: The exit code
 * Return: The exit code
 */
void error_exit(const char *message, const char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

/**
 * main - Entry point
 * @argc: The number of argument
 * @argv: The argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		error_exit("Usage: cp file_from file_to\n", argv[0], 97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		error_exit("Error: Can't read from file %s\n", argv[1], 98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error_exit("Error: Can't write to file %s\n", argv[2], 99);
	}

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_exit("Error: Can't write to file %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file %s\n", argv[1], 98);

	if (close(file_from) == -1)
		error_exit("Error: Can't close fd %d\n", argv[1], 100);

	if (close(file_to) == -1)
		error_exit("Error: Can't close fd %d\n", argv[2], 100);

	return (0);
}
