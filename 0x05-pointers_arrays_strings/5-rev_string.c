#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: string
 */

void rev_string(char *s)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		if (s[i] != '\0')
		{
			i++;

		}
		else
		{
			break;
		}
	}
		for (i--; i >= 0; i--)
		{
			putchar(s[i]);
		}
}
