#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *print_dog-print
 *Return:0
 *@dog:?
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("owner: %s\n", d->owner);
}
