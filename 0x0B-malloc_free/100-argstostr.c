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
	int size;
	char *ptr;
	int i;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
	}

	size += (ac + 1);
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}

	ptr[k] = '\0';

	return (ptr);
}
