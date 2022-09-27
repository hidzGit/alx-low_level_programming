#include "main.h"

/**
 * _memcpy - copy n number of bytes from src to dest
 * @dest: destination array
 * @src: src array
 * @n: number of bytes to be copied
 * Return: destination array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
