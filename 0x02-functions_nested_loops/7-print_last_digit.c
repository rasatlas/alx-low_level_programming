#include "main.h"
#include "6-abs.c"
/**
 *print_last_digit - is a function that prints teh last digit of a number.
 *
 *@num: is an integer value passed to print_last_digit by a user.
 *
 *Return: returns the last digit of num.
 */

int print_last_digit(int num)
{
	_putchar('0' + _abs(num % 10));
	return (_abs(num % 10));
}
