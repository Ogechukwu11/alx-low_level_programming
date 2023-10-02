#include "main.h"

/**
 * main - To copy the content of a file to another file.
 * @argc: The number of argument
 * @argv: The argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, a, b;
	ssize_t b_r;
	char buf[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file");
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((b_r = read(file_from, buf, BUFFER_SIZE)) > 0)
	{
		if (file_to == -1 || write(file_to, buf, b_r) != b_r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
			close(file_from);
			exit(98);
		}
	}
	if (b_r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	a = close(file_from);
	b = close(file_to);

	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", file_from);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
