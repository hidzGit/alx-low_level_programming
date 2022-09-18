#include <stdio.h>

/**
 * main - print 1..100, prints fizz at
 * 3 and it multiples,
 * buzz at 5 and it multiples
 * fizzbuzz at the multiples of 5*3
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			putchar(' ');
			continue;
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			putchar(' ');
			continue;
		}
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
			putchar(' ');
			continue;
		}
		printf("%d", i);
		printf(" ");
	}
	putchar('\n');
	return (0);
}
