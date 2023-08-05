#include <stdio.h>
/**
 * main - a program that prints all arguments it receives
 * @argc: argument
 * @argv: array of string
 * Return: void
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
