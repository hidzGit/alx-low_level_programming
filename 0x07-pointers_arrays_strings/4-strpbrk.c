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
	int check = 1;
	char *ans;

	for (i = 0; s[i] != '\0' && check; i++)
	{
		check = 0;
		for (k = 0; accept[k]; k++)
		{
			if (s[i] == accept[k])
			{
				check = 1;
				ans = (accept + k);
				break;
			}
		}
		if (check == 0)
			ans = NULL;
	}
	return (ans);
}
