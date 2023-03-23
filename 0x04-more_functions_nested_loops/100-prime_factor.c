#include <stdio.h>

/**
 * main - entry point for a program that finds and
 * prints the largest prime factor of the number
 * 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long primeNum = 612852475143, divisor;

	while (divisor < (primeNum / 2))
	{
		if ((primeNum % 2) == 0)
		{
			primeNum /= 2;
			continue;
		}

		for (divisor = 3; divisor < (primeNum / 2); divisor += 2)
		{
			if ((primeNum % divisor) == 0)
				primeNum /= divisor;
		}
	}

	printf("%ld\n", primeNum);

	return (0);
}
