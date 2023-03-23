#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */

void print_most_numbers(void)
{
	int start = 0;
	int upperLimit = 9;

	while (start <= upperLimit)
	{
		if ((start == 2) || (start == 4))
			continue;
		else
			print_numbers;

		start++;
	}
}
