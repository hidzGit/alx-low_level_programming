#include "main.h"

/**
 * string_nconcat - concat n bytes of string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to add from s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_str;
	unsigned int index, len_1 = 0, len_2 = 0, sl2;

	for (index = 0; s1[index]; index++)
	{
		len_1++;
	}
	for (index = 0; index < n; index++)
	{
		len_2++;
	}
	n_str = malloc(sizeof(char) * len_1 + len_2 + 1);
	if (n_str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; index <= len_1; index++)
	{
		n_str[index] = s1[index];
	}
	sl2 = len_1;
	for (index = 0; index <= len_2; index++, sl2++)
	{
		n_str[sl2] = s2[index];
	}
	n_str[len_1 + len_2 + 1] = '\0';

	return (n_str);
}
