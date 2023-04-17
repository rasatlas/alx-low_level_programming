#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct definition named dog
 *
 * @name: name of struct dog
 * @age: age of struct dog
 * @owner: owner of struct dog
 *
 * Description: define a struct named dog which states name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif /*DOG_H */
