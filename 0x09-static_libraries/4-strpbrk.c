#include "main.h"

/**
 * _strpbrk - return the index where string s does not contain
 * any value in array accept
 * @s: searched string
 * @accept: value to search for
 * Return: index where value is absent
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k;
	char *ans;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				ans = &s[i];
				return (ans);
			}
		}
	}
	return (0);
}
