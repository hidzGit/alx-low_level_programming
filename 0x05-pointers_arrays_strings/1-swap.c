#include "main.h"

/**
 * swap_int - swaps the value of two pointers
 * @a: pointer a
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
