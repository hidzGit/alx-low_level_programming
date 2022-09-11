#include <stdio.h>

/**
 * main - print 0..9
 *
 * Return: 0..9 separated by in reverse
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
		{
		putchar(num);
		putchar(',');
		num++;
		}
	putchar('\n');
	return (0);
}
