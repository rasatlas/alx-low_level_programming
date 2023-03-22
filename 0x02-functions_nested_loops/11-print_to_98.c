#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * @n: is integer value passed by user.
 *
 */

void print_to_98(int n)
{
	int value = 98;
	
	while (n < value)
		{
			printf("%d, ", n);
			n++;
		}
	while (value < n)
		{
			printf("%d, ", n);
			n--;
		}
	if (n == value)
		printf("%d", n);
	printf("\n");
}
