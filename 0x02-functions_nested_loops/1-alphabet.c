#include "main.h"
/**
 * print_alphabet - print alphabets using a void function
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int alpha = 'a';

	while (alpha <= 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	_putchar('\n');
}
