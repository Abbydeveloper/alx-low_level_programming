#ifndef DOG_H
#define DOG_H
#include <stdlib.h>

/**
 * struct dog - 
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 */

struct Dog
{
	char *name;
	float age;
	char *owner;
};

struct Dog *dog(char *name, float age, char *owner)
{
	struct Dog *dog;

	dog = malloc(sizeof(struct Dog));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return dog;
}

#endif
