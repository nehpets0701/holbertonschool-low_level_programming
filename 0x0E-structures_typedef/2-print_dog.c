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
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
