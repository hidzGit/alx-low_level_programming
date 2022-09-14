#include "main.h"
/**
 * main - print alphabets using a void function
 *
 * Return: 0
 */
int main(void)
{
	int alpha = 'a';
	
	print_alphabet();
	while(alpha < 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	return (0);
}
