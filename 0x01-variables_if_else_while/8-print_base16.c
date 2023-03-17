#include <stdio.h>

/**
 * main - Hexadecimal
 *
 * Return: Alwasy 0 (Success)
 */

int main(void)
{
	int a = '0';
	int a_to_f = 'a';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}

	while (a_to_f <= 'f')
	{
		putchar(a_to_f);
		a_to_f++;
	}
	putchar('\n');

	return (0);
}
