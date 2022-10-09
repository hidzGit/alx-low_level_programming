#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size);

	if (array == NULL)
		return (NULL);
	
}
