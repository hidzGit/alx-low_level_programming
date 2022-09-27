#include "main.h"

/**
 * _strspn - return the index where string s does not contain
 * any value in array accept
 * @s: searched string
 * @accept: value to search for
 * Return: index where value is absent
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j = 0, k;
	int check = 1;

	for (i = 0; s[i] != '\0' && check; i++)
	{
		check = 0;
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				check = 1;
				j = j + 1;
				break;
			}
		}
	}
	return (j);
}
