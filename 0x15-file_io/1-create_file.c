#include "main.h"
/**
 * _str - TO calculate the length of a string
 * @s: The string
 * Return: The length of a string
 */

int _str(char *s)
{
	int count, len = 0;

	for (count = 0; s[count] != '\0'; count++)
		len++;
	return (len);
}

/**
 * create_file - To create a file
 * @filename: The name of the file to create
 * @text_content: The string to write in the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, write_bytes;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		write_bytes = write(file, text_content, _str(text_content));
		if (write_bytes == -1)
		{
			close(file);
			return (-1);
		}
	}
	else
		text_content = "";
	if (chmod(filename, 0600) == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
