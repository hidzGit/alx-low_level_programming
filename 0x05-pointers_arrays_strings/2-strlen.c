#include "main.h"

/**
 * _strlen - print the length of a string
 * @s: the string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		printf("%d", i);
		i++;
	}
	return (0);
}
