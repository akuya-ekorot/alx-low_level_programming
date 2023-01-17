#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: string, name of the dog
 * @age: float, the age of the dog
 * @owner: string, the name of the owner of the dog
 *
 *Return: dog_t *, new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *n, *o;
	dog_t *new;

	n = name;
	o = owner;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = n;
	new->age = age;
	new->owner = o;

	return (new);
}
