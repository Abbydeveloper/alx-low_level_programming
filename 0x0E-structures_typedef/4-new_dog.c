#include <stdio.h>
#include "dog.h"

/**
 * _strlen - length of string
 * @s: string to get length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - copy string
 * @s: string to copy
 * @new: new string
 *
 * Return: pointer to new string
 */

char *_strcpy(char *new, char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		new[len] = s[len];
		len++;
	}
	new[len] = '\0';
	return (new);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = 0;
	int owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name);
		owner_len = _strlen(owner);
		my_dog = malloc(sizeof(dog_t));

		if (my_dog == NULL)
			return (NULL);

		my_dog->name = malloc(sizeof(char) * (name_len + 1));

		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}

		my_dog->owner = malloc(sizeof(char) * (owner_len + 1));

		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}

		my_dog->name = _strcpy(my_dog->name, name);
		my_dog->age = age;
		my_dog->owner = _strcpy(my_dog->owner, owner);
	}
	return (my_dog);

}
