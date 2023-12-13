#include "search_algos.h"

/**
 * interpolation_search - a function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if array is NULL or
 * value not in array
 */

int interpolation_search(int *array, size_t size, int value)
{
	double result;
	size_t pos;
	int low = 0;
	int high = (int)(size - 1);

	if (!array)
	{
		return (-1);
	}

	while (size)
	{
		result = ((double)(high - low) / (array[high] - array[low])
		* (value - array[low]));
		pos = (size_t)(low + result);
		printf("Value checked array[%d]", (int)pos);
		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		if (low == high)
			break;
	}
	return (-1);
}
