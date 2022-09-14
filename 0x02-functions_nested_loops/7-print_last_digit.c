#include "main.h"

/**
 * print_last_digit - print input number last digit;
 * @x: input digit;
 * Return: 0
 */
int print_last_digit(int x)
{
	int y = x % 10;

	if (y > 0)
		_putchar(y + '0');
	else
		{
		y *= -1;
		return (y);
		}
	return (0);
}
