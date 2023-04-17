#include "dog.h"
#include "main.h"

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: char pointer to name
 * @age: age
 * @owner: char pointer to owner
 *
 * Return: pointer to a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;
	int i, j, k;
	char *dogName, *dogOwner;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	dogName = malloc(sizeof(char) * i + 1);
	if (dogName == NULL)
	{
		free(newDog);
		return (NULL);
	}
	dogOwner = malloc(sizeof(char) * j + 1);
	if (dogOwner == NULL)
	{
		free(dogName);
		free(newDog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dogName[k] = name[k];
	for (k = 0; k <= j; k++)
		dogOwner[k] = owner[k];
	newDog->name = dogName;
	newDog->age = age;
	newDog->owner = dogOwner;
	return (newDog);
}
