#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 *
 * This function works by first creating an integer variable i and setting it
 * to 1. Then, it creates a pointer to a character variable c and casts the
 * address of i to the pointer. Finally, it returns the value of the first
 * byte of c. On a little-endian system, the first byte of c will contain
 * the value 1. On a big-endian system, the first byte of c will contain the
 * value 0. Therefore, this function will return 1 on a little-endian system
 * and 0 on a big-endian system.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i = 1;

	char *c = (char *)&i;

	return (c[0] == 1);
}
