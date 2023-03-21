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
	int lastDigit;

	if (num < 0)
	{
		num *= -1;
		lastDigit = (num % 10);
	}
	else if (num == 0)
		lastDigit = 0;
	else
		lastDigit = num % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
