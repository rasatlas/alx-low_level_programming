#include "main.h"

/**
 * positive_or_negative - tests if a number - or + or zero
 * @n: user provided test value
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%i is Positive.\n", n);
	}
	else if (n == 0)
	{
		printf("%i is Zero.\n", n);
	}
	else if (n < 0)
	{
		printf("%i is Negative.\n", n);
	}
}
