#include "main.h"

/**
 * _pow_recursion - print the power of int
 * @x: int to be raised
 * @y: factor to be raised by
 * Return: the x to power y and -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}

