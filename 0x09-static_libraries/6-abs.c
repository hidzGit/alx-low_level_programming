#include "main.h"

/**
 * _abs - print absolute value of int
 * @x: integer input
 * Return: 0
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		x *= -1;
		return (x);
	}
return (0);
}

