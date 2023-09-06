#include "main.h"
/**
 * _str - A function to calculate the length of a string.
 * @s: The string.
 * Return: The length of the string.
 */

int _str(char *s)
{
	int count, len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}

/**
 * append_text_to_file - A function to append text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to add at the end of the file.
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, write_bytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_bytes = write(file, text_content, _str(text_content));
		if (write_bytes == -1)
			return (-1);
	}
	close(file);
	return (1);
}
