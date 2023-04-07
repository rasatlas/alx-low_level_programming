#include "main.h"

/**
 * _changer - changes notes into cents.
 * @note: value to changed into different denominations of cents.
 * Return: note interms of cents.
 */

int _changer(int note)
{
	if (note == 0)
	{
		return (0);
	}
	else if (note >= 25)
	{
		return (1 + _changer(note - 25));
	}
	else if (note >= 10)
	{
		return (1 + _changer(note - 10));
	}
	else if (note >= 5)
	{
		return (1 + _changer(note - 5));
	}
	else if (note >= 2)
	{
		return (1 + _changer(note - 2));
	}
	else
	{
		return (1 + _changer(note - 1));
	}
}

/**
 * main - entry point and a program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if the number of arguments passed is not exactly 1,
 * 0 if the number passed as the argument is negative.
 */

int main(int argc, char *argv[])
{
	int note;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	note = atoi(argv[1]);
	if (note < 0)
	{
		printf("%i\n", 0);
		return (0);
	}
	printf("%i\n", _changer(note));
	return (0);
}
