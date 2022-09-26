#include "main.h"

/**
 * _memset - assign char b n number of char in string s
 * @b: value to be assigned
 * @n: number of bytes to assign
 * Return: s with assigned values
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
