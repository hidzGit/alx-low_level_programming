#include "main.h"

/**
 * print_line - print underscore n times
 *
 * @n: number inputted
 */

void print_line(int n)
{
	int i = 0;

	while (n > 0 && i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
	if (n <= 0)
		_putchar('\n');
}
