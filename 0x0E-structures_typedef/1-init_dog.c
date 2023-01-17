#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes the variable of type struct dog
 *
 * @d: struct dog
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: Nothing (void)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	printf("%s\n", name);
	printf("%s\n", owner);
	printf("%.1f\n", age);

	d->name = name;
	d->age = age;
	d->owner = owner;

	
	printf("My name is %s, I am %.1f years old and my owner is %s\n", d->name, d->age, d->owner);
}
