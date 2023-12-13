#include "search_algos.h"

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
	int step = (int)floor(sqrt(size));
	int left = 0;
	int right = left + step;

	while (array[right] < value)
	{
		left = right;
		right += step;
		if (left >= (int)(size - 1))
		{
			return (-1);
		}
	}
	for (; left < right; left++)
	{
		if (array[left] == value)
		{
			return (left);
		}
	}
	return (-1);
}
