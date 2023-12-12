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
	int left = 0;
	int right = (int)(size - 1);
	int middle;
	int i;

	if (!array)
	{
		return (-1);
	}

	while (left <= right)
	{
		middle = floor((left + right) / 2);

		printf("Searching in array: ");
		for(i = left; i < right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d", array[right]);
		printf("\n");
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
