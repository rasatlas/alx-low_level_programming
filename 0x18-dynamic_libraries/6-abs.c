#include "main.h"

/**
 * _abs - is a function that computes the absolute value of an integer.
 *
 * @num: number passed to the function from user.
 *
 * Return: return num if it is positive or zero
 * Else, return num multiplied by -1
 *
 */

int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
