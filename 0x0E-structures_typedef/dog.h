#ifndef DOG_H
#define DOG_H

/**
 * struct dog - describes a dog
 * @name: Name of the dog, string
 * @age: Age of the dog, float
 * @owner: Owener of the dog, string
 */
struct dog
{
		char *name;
		float age;
		char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */