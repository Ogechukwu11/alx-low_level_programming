#include <stdio.h>
/**
 * main - a program that prints the number of arguments
 * @argc: argument
 * @argv: array of string
 * Return: void
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
