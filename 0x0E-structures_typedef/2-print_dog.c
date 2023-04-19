#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints struct dog
 * @d: struct to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %s\n:%f\nOwner", d->name, d->owner, d->age);
}
