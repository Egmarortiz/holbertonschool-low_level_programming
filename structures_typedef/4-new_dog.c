#include "dog.h"
#include <stdlib.h>

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
	char *name_copy, *owner_copy;
	unsigned int name_len = 0, owner_len = 0;
	unsigned int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->age = age;

	/* Copy name */
	if (name != NULL)
	{
		while (name[name_len])
			name_len++;
		name_copy = malloc(name_len + 1);
		if (name_copy == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i < name_len; i++)
			name_copy[i] = name[i];
		name_copy[name_len] = '\0';
		d->name = name_copy;
	}
	else
		d->name = NULL;

	/* Copy owner */
	if (owner != NULL)
	{
		while (owner[owner_len])
			owner_len++;
		owner_copy = malloc(owner_len + 1);
		if (owner_copy == NULL)
		{
			if (d->name != NULL)
				free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; i < owner_len; i++)
			owner_copy[i] = owner[i];
		owner_copy[owner_len] = '\0';
		d->owner = owner_copy;
	}
	else
		d->owner = NULL;

	return (d);
}

