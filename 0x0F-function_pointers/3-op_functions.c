#include "3-calc.h"

/**
 * op_add - adds int a and int b
 * @a: first integer value passed.
 * @b: second integer value passed.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a.
 * @a: operand 1.
 * @b: operand 2.
 * Return: difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a by b.
 * @a: operand 1.
 * @b: operand 2.
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b.
 * @a: numerator.
 * @b: denominator.
 * Return: integer quotient of a to b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of a divided by b.
 * @a: numerator.
 * @b: denominator.
 * Return: remainder of a divided by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
