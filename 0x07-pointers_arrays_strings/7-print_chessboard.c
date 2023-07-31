#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard
 * @a: a pointer to an array
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int k;
	int q;

	for (k = 0; k < 8; k++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[k][q]);
		_putchar('\n');
	}
}
