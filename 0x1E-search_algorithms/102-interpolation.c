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

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = (low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low])));

		if (array[(int)pos] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)pos, array[(int)pos]);
			return (pos);
		}

		if (array[(int)pos] < value)
		{
			low = pos + 1;
		}

		if (array[(int)pos] > value)
		{
			high = pos - 1;
		}
	}
	printf("Value checked array[%d] is out of range\n", (int)pos);
	return (-1);
}
