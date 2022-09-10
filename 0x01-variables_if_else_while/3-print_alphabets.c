#include <stdio.h>

/**
 * main - for loop for printing alphapbets
 *
 * Return: a..z
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
