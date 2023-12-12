#include "search_algos.h"
/**
* binary_search - A function that searches for a value in a sorted array of
* integers using binary search algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: index where value is located or -1 if array is NULL or value is not
* present in array
*/

int binary_search(int *array, size_t size, int value)
{
	size_t middle = floor(size / 2);

	if (!array)
	{
		return (-1);
	}

	while (middle < size && middle > 0)
	{
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			middle = floor((middle + size) / 2);
		}
		else
		{
			middle = floor(middle / 2);
		}
	}
	return (-1);
}
