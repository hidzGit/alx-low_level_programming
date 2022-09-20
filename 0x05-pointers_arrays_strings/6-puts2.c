#include "main.h"

/**
 * puts2 - prints every other character in str
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		if (i != j)
		{
			i++;
			continue;
		}
		_putchar(str[i]);
		i++;
		j += 2;
	}
}
