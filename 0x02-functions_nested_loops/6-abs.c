#include "main.h"

/**
 * _abs - print absolute value of int
 * @x: integer input
 * Return: 0
 */
int _abs(int x)
{
	if (x >= 0)
		_putchar('x');
	else
	{
		x *= -1;
		_putchar('x');
	}
return (0);
}
