#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: nothing
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
