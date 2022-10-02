#include "main.h"

/**
 * _strncpy - concatentate n number of words with the first string
 * @dest: destination string
 * @src: source string
 * @n: number of words to be concantented
 * Return: new concatenated word
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i]  = src[i];
	}
	for (; n > i; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
