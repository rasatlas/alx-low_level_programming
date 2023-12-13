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
	size_t pos;
	int low = 0;
	int high = (int)(size - 1);

	if (!array)
	{
		return (-1);
	}

	if (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		if (array[(int)pos])
		{
			return (pos);
		}

		if (array[(int)pos] < value)
		{
			return (interpolation_search(array, pos + 1, value));
		}

		if (array[(int)pos] > value)
		{
			return (interpolation_search(array, pos - 1, value));
		}
	}
	return (-1);
}
