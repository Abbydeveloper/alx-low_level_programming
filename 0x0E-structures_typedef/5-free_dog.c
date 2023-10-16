#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: dog struct
 */

void free_dog(dog_t *d)
{
	free(d);
}
