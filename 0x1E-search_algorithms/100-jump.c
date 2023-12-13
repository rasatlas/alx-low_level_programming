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
	int index, step, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	step = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * step;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
