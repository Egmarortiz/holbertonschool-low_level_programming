#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints the details of a dog.
 * @d: pointer to the struct dog.
 *
 * Description: If an element of d is NULL, (nil) is printed.
 * If d is NULL, nothing is printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}

