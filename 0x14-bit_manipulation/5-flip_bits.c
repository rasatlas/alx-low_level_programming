#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 *
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip to get from one
 * number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip, count = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		count += flip & 1;
		flip >>= 1;
	}
	return (count);
}
