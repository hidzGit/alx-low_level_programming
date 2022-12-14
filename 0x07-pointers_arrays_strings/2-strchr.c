#include "main.h"

/**
 * _strchr - check for the first occurence of a char
 * in a string and returns the pointerto it
 * @s: string to check
 * @c: char to check for
 * Return: pointer if char is present, null if not
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	return (0);
}
