#include "main.h"

/**
 * get_bit - Write a function that returns the value of a bit at a given index.
 * @n: number to calculate the value of a bit at a given index upon.
 * @index: is the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
