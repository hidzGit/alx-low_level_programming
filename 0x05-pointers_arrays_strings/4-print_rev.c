#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
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
			_putchar(s[i]);
		}
		_putchar('\n');
	
}
