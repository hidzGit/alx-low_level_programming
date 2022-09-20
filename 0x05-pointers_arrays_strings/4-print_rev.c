#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	if (i >= 0)
	{
		while (s[i] != '\0')
		{
			i++;

		/*	j = i;*/
		}	
		while (i >= 0)
			{
				_putchar(s[i]);
				i--;
			}
	}
	_putchar('\n');
}
