#include <stdio.h>

/**
 * main - for loop for printing alphapbets
 *
 * Return: a..z
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
