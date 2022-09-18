#include "main.h"

/**
 * print_diagonal - print slash in a diagonal manner
 * @n: number of times the slash is printed
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		i = 1;

		while (i <= n)
		{
			_putchar(' ');
			i++;
		}
	}
}
