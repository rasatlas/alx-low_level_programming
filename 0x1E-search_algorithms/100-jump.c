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
	int i;

	if (!array)
	{
		return (-1);
	}

	do {
		printf("Value checked array [%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
		{
			return (left);
		}

		left = right;
		right += step;
	} while (array[right] < value && right < (int)size);

	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i <= right && right < (int)size; i++)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
