#include <stdio.h>

/**
 * main - print numbers
 *
 * Return: 1..10
 */
int main(void)
{
	int numbers = '0x0';

	while (numbers <= '0xf')
	{
	putchar(numbers);
	numbers++;
	}
	putchar('\n');
	return (0);
}
