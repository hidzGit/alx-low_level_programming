#include "main.h"

/**
 * _print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	if (i >= 0)
	{
		while (s[i] != '\0')
		{
			i++;

			j = i;
		}
		while (j >= 0)
		{
			_putchar(s[j]);
			j--;
		}

	}

	_putchar('\n');
}
