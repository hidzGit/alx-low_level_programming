#include "main.h"

/**
 * _strncat - concatentate n number of words with the first string
 * @dest: destination string
 * @src: source string
 * @n: number of words to be concantented
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; src[len2] != '\0' && n > 0; len2++, n--, len1++)
	{
		dest[len1] = src[len2];
	}
	return (dest);
}
