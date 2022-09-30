#include "main.h"

/**
 * is_prime_number - check if a nnumber is a prime number
 * @n: number to check
 * Return: 1 if its prime and 0 if not
 */

int is_prime_number(int n)
{
	if (n == 3 || n == 2 || n == 5 || n == 7)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0 || n == 1
			|| n % 5 == 0 || n % 7 == 0 || n <= 0)
		return (0);
	else
		return (1);
}
