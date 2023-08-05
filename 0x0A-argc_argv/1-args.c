#include <stdio.h>
/**
 * main - a program that prints the number of arguments
 * @argc: argument
 * @argv: array of string
 * Return: void
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
