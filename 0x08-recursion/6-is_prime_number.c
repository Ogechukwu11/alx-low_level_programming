#include "main.h"
/**
 * real_prime - a function to find the prime recursively
 * @n: number to evaluate
 * @i: number to iterate
 * Return: 1 if n is prime, else 0
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}

/**
 * is_prime_number - a function that returns a prime number
 * @n: integer
 * Return: 1 if the input integer is a prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}
