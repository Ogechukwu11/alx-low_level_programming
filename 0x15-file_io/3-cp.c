#include  "main.h"
/**
 * _buffer - A function to allocate 1024 bytes of memory
 * @c: input
 * Return: A pointer to the allocated buffer
 */

char *_buffer(char *c)
{
	char *b;

	b  = malloc(sizeof(char) * 1024);
	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", c);
		exit(99);
	}
	return (b);
}

/**
 * c_file - A function to close file
 * @f: input
 */

void c_file(int f)
{
	int c;

	c = close(f);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
}

/**
 * main - To write a program that copies the content of a file to another file
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f_from, f_to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = _buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	r = read(f_from, buf, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		w = write(f_to, buf, r);
		if (f_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		r = read(f_from, buf, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buf);
	c_file(f_from);
	c_file(f_to);
	return (0);
}
