#include "main.h"

/**
 *print_last_digit - is a function that prints teh last digit of a number.
 *
 *@num: is an integer value passed to print_last_digit by a user.
 *
 *Return: returns the last digit of num.
 */

int print_last_digit(int num)
{
	int l;

	if (num > 0)
		l = (num % 10);
	else if (num < 0)
	{
		num *= -1;
		l = (num % 10);
	}
	else
		l = num;
	_putchar(l + '0');
	return (l);
}
