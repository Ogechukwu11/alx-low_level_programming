#include "main.h"

/**
 * _strlen - To calculate the length of a string.
 * @s: The string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}

/**
 * append_text_to_file - To append text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The null terminated string to add.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		byte_write = write(fd, text_content, _strlen(text_content));
		if (byte_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
