#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: destination and 1st string
 * @src: source and 2nd string
 * Return: the new string
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2;

	len1 = 0;
	while (dest[len1] != '\0')
		len1++;
	len2 = 0;
	while (src[len2] != '\0')
	{

		dest[len1 + len2] = src[len2];	
		len2++;
	}

	dest[len1 + len2] = '\0';
	return (dest);
}
