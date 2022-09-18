#include "main.h"

/**
 * print_triangle - print #in a triangular manner
 * @size: number of # to make up the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else

	{
		for (j = 1; j <= size; j++)
		{
			for (i = size - j; i >= 1; i--)
				_putchar(' ');

			for (i = 1; i <= j; i++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
