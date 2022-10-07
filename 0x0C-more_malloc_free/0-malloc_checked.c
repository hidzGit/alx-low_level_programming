#include "main.h"

/**
 * malloc_checked - works like malloc
 * @b: size of memory to be assigneed
 * Return: the pointer to the new memory
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
