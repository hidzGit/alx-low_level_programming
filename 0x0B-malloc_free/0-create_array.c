#include "main.h"

/**
 * create_array - create an array using malloc
 * @size: size of array
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *temp;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	temp = malloc(sizeof(char) * size);

	if (temp == NULL)
		return (NULL);

	while (i < size)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
