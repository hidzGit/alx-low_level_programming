#include "main.h"

/**
 * _puts - prints character
 * @str: string
 */

void _puts(char *str)
{	
	int i;

	while (*str != '\0')
	{
		_putchar("%s", *str);

	}
}
