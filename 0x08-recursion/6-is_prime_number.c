#include "main.h"

/**
 * isPrime - checks recursively if input is prime or not
 *
 * @n: number to be tasted for being prime.
 * @y: control number to test n against.
 *
 * Return: 1 if n is prime, otherwise 0.
 */

int isPrime(int n, int y)
{
	if (n == y)
		return (1);
	else if (n % y == 0)
		return (0);

	return (isPrime(n, (y + 1)));
}

/**
 * is_prime_number - is a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: integer value going to be checked if prime or not.
 *
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (isPrime(n, 2));
}
