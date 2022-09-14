#include "main.h"

/**
 * print_sign - print weather input is negative or positive
 * @n: nnumber inputted
 * Return: 1 if +ve, 0 is it equals 0, and -1 if its -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
