#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: pointer to the new dog, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->age = age;

	if (name)
	{
		d->name = strdup(name);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
	}
	else
		d->name = NULL;

	if (owner)
	{
		d->owner = strdup(owner);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}
	else
		d->owner = NULL;

	return (d);
}

