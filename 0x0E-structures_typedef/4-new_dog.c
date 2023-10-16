#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t struct dog my_dog;

	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
