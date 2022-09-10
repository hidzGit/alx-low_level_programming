#include <stdio.h>

/**
 * main - for loop for printing alphapbets
 *
 * Return: a..z
 */
int main(void)
{
	char alphabet;

	while (alphabet <= 'z')
		putchar(alphabet);
	while (alphabet <= 'Z')
		putchar(alphabet);
	putchar('\n');
	return (0);
}
