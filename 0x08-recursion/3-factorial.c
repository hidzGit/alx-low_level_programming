#include "main.h"

/**
 * factorial - print factorialof an int
 * @n: int
 * Return: factorial if n is >= 0 minus 1 if not
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n-1));
}
