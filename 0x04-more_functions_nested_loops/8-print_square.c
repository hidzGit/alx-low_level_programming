#include "main.h"

/**
 * print_square - print # in number of size horizontally and vertically
 * to form a square
 * @size: number of # to be printed horizontally and vertically
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
