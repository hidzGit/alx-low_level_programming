#include "main.h"

/**
 * print_last_digit - print input number last digit;
 * @x: input digit;
 * @y: last digit of input;
 * Return: last digit,y
 */
int print_last_digit(int x)
{
	int y;

	_putchar(x % 10 + '0');
	y = _putchar(x % 10 + '0');
	return (y);
}
