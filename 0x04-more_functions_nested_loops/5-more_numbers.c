#include "main.h"

/**
 * more_numbers - print numbers 1..14
 */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			printf("%d", j);
			j++;
		}
		printf("\n");
			i++;
	}
}
