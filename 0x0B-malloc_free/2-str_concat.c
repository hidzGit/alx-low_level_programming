#include "main.h"

/**
 * str_concat - concat string using malloc
 * @s1: string1
 * @s2: string2
 * Return: concatenated str
 */

char *str_concat(char *s1, char *s2)
{
	int index, len1, len2, temp, fin_len;
	if (s1 == NULL)
	char *conc_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	for (index = 0; s1[index]; index++)
		len1++;

	len2 = 0;
	for (index = 0; s2[index]; index++)
		len2++;

	conc_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (conc_str == NULL)
		return (NULL);

	temp = 0;
	for (index = 0; s1[index]; index++)
	{
		conc_str[index] = s1[index];
		temp++;
	}
	for (index = 0; s2[index]; temp++, index++)
	{
		conc_str[temp] = s2[index];
	}
	fin_len = len1 + len2 + 1;
	conc_str[fin_len] = '\0';
	return (conc_str);
}
