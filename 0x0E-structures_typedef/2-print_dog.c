#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print valuues in a chosn member of struct dog
 * @d: chosen member
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d->age == 0)
	{
		printf("Age: (nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	if  (d->age != 0)
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
