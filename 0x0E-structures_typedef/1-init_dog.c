#include "dog.h"
#include "main.h"

/**
 * init_dog - a function that initialize a variable of type struct dog.
 *
 * @d: struct dog to be initialized.
 * @name: name of struct dog.
 * @age: age of struct dog.
 * @owner: owner of struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
