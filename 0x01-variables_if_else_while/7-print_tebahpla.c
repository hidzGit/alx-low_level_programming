#include <stdio.h>

/**
 * main - print a..z
 *
 * Return: a..z in reverse
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
		{
		putchar(alphabet);
		alphabet--;
		}
	putchar('\n');
	return (0);
}
