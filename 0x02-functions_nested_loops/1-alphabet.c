#include "main.h"
/**
 * main - print alphabets using a void function
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	int alpha = 'a';
	while(alpha < 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	return (0);
}
