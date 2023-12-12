#include "search_algos.h"

/**
* printer - function that prints values of an array
* @array: pointer to the first element of array to be printed
* @right: right index of array
* @isFirstIteration: flag value for printing ,
* @i: itration variable
* Return: void
*/

void printer(int *array, int right, int i, int isFirstIteration)
{
	printf("Searching in array: ");
	for (; i <= right; i++)
	{
		if (isFirstIteration == 0)
		{
			printf("%d", array[i]);
			isFirstIteration = 1;
		}
		else
		{
			printf(", %d", array[i]);
		}
	}
	printf("\n");
}

/**
* binary_search - A function that searches for a value in a sorted array
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value to search for
* Return: index of value or -1 if array is NULL or value not present in array
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = (int)(size - 1);
	int middle, i, isFirstIteration = 0;

	if (!array)
	{
		return (-1);
	}
	while (left <= right)
	{
		middle = floor((left + right) / 2);
		i = left;
		printer(array, right, i, isFirstIteration);
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
		isFirstIteration = 0;
	}
	return (-1);
}
