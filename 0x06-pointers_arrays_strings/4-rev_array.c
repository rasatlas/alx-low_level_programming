#include "main.h"

/**
 * reverse_array - is a function that reverses the
 * content of an array of integers.
 *
 * @a: int pointer to an array
 * @n: number of elements of array a
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;
	int j = (n - 1);

	if ((n % 2) == 1)
	{
		while (i != j)
		{
			tmp = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = tmp;
			i++;
			j--;
		}
	}
	else
	{
		while (i < j)
		{
			tmp = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = tmp;
			i++;
			j--;
		}
	}
}
