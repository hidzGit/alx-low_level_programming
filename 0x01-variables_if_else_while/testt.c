#include <stdio.h>

/**
 * main - for loop for printing alphapbets
 *
 * Return: a..z
 */
int main(void)
{
	char letter;
	letter = 'a';

	while (letter <= 'z')
		letter++;
		putchar(letter);

	while (letter <= 'Z')
		letter++;
		putchar(letter);

	putchar('\n');
	return (0);
}
