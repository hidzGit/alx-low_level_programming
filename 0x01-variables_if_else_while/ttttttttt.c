#include <stdio.h>

/**
 * main - print a -z
 *
 * Return: skip e and q
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
