#include "main.h"

/**
 * _strcmp - compare two strings and return the
 * difference of the two in ASCII value
 * @s1: string one
 * @s2: string two
 * Return: positive diff of the string in s1>s2, neg if s2>s1 and 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int val1, val2, index1, index2, ans;

	val1 = 0;
	for (index1 = 0; s1[index1] != '\0'; index1++)
	{
		val1 = val1 + s1[index1];
	}
	val2 = 0;
	for (index2 = 0; s2[index2] != '\0'; index2++)
	{
		val2 = val2 + s2[index2];
	}
	if (val1 > val2)
	{
		ans = val1 - val2;
	}
	else if (val2 > val1)
	{
		ans = -(val2 - val1);
	}
	else
		ans = 0;

	return (ans);
}
