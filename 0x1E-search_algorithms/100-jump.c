#include "search_algos.h"

/**
* min - a function that returns the minimum of two given numbers
* @a: first integer value
* @b: second integer value
* Return: the smallest of a or b
*/

int min(int a, int b)
{
	if (b > a)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
* jump_search - a function that searches for a value in a sorted
* array of integers using jump search
* @array: a pointer to the first element of the array to search in
* @size: number of elemments in array
* @value: the value to search for
* Return: first index where value is located or -1 if array is NULL or
* value is not present in the array
*/

int jump_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)(size - 1);
	int jump = floor(sqrt(right));

	if (!array)
	{
		return (-1);
	}
	while (array[min(jump, right)] < value)
	{
		left = jump;
		jump += floor(sqrt(right));
		if (left > right)
		{
			return (-1);
		}
	}
	while (array[left] < value)
	{
		left++;
		if (left == min(jump, right))
		{
			return (-1);
		}
	}
	return (-1);
}
