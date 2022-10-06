#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return the copy of the inputted string using malloc
 * @str: inputted str
 * Return: null if malloc is unsuccessful but the string if successful
 */

char *_strdup(char *str)
{
	char *n_str;
	int i, x = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		x++;
	}

	n_str = malloc(sizeof(char) * (x + 1));

	if (n_str == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		n_str[i] = str[i];
			i++;
	}
	n_str[x] = '\0';

	return (n_str);
}
