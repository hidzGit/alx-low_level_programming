#include <stdio.h>

/**
 * main - print hexdecnumbers, b16
 * @prints b16 num sing while loop
 *
 * Return: all b16 numbers
 */
int main(void)
{
	int num = 0x1;

	while (num <= 0xf)
	{
	printf("%x", num);
	num++;
	}
	printf("\n");
	return (0);

}
