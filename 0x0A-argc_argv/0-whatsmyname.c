#include <stdio.h>
/**
 * main - a program that prints its name
 * @argc: argument
 * @argv: array of string
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
