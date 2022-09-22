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
	int len1;

	for (len1 = 0; src[len1] != '\0' && n > 0; len1++, n--)
	{

		dest[len1] = src[len1];
	}
	for (; n > len1; len1++)
	{
		dest[len1] = '\0';
	}
	return (dest);
}
