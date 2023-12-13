#include "search_algos.h"

/**
 * linearsearch - function to perform linear search
 * @left: left boundary
 * @right: right boundary
 * @array: pointer to the first element of array
 * @value: value to look for
 * Return: index of value or -1 if it doesn't match to any element
 */

int linearsearch(int *array, int left, int right, int value)
{
	for (; left < right; left++)
	{
		if (array[left] == value)
		{
			return (left);
		}
	}
	return (-1);
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
	int step = floor(sqrt((int)(size - 1)));
	int right = step;
	int isize = (int)size;

	if (!array)
	{
		return (-1);
	}
	while (array[step] < value)
	{
		left = right;
		right += step;
		if ((right > (isize - 1)) && (left < (isize - 1)) && (array[left]) < value)
		{
			linearsearch(array, left, right, value);
		}
		else
		{
			return (-1);
		}
	}
	linearsearch(array, left, right, value);
	return (-1);
}
