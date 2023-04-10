#include "main.h"

/**
 * argstostr -  a function that concatenates all the arguments of your program.
 *
 * @ac: number of arguments.
 * @av: array of arguments.
 *
 * Return: NULL if ac is 0 or av is NULL, a pointer to a new string or
 * NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *ptr;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	ptr = malloc((sizeof(char) * size) + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[k] = av[i][j];
			j++;
			k++;
		}
		ptr[k] = '\n';
		k++;
		i++;
	}
	ptr[k] = '\0';
	return (ptr);
}
