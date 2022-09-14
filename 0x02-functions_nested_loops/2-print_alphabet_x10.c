#include "main.h"

/**
 * print_alphabet_x10 - print a..z 10x
 *
 */
void print_alphabet_x10(void)
{
	int i = 'a', alpha;

	while (i <= 'j')
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
		_putchar(alpha);
		alpha++;
		}
		_putchar('\n');
		i++;
	}
}
