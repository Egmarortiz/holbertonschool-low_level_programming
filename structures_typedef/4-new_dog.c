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
	unsigned int nlen = 0, olen = 0, i;
	char *n_copy, *o_copy;

	while (name && name[nlen])
		nlen++;
	while (owner && owner[olen])
		olen++;
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	n_copy = name ? malloc(nlen + 1) : NULL;
	o_copy = owner ? malloc(olen + 1) : NULL;
	if ((name && !n_copy) || (owner && !o_copy))
	{
		free(n_copy);
		free(o_copy);
		free(d);
		return (NULL);
	}
	for (i = 0; name && i <= nlen; i++)
		n_copy[i] = name[i];
	for (i = 0; owner && i <= olen; i++)
		o_copy[i] = owner[i];
	d->name = n_copy;
	d->age = age;
	d->owner = o_copy;
	return (d);
}

