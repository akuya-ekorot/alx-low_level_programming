#include "dog.h"
#include <stdlib.h>

/**
* _strcpy - copies a string pointed to by src, including the terminating null
* byte, to the buffer pointed to by dest
*
* @src: string
* @dest: buffer
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';

	return (dest);
}

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

	n = _strcpy(n, name);
	o = _strcpy(o, owner);

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = n;
	new->age = age;
	new->owner = o;

	return (new);
}
