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

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: value to clear_bit upon.
 * @index: is the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
