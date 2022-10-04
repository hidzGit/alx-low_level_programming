#include "main.h"
#include <stdlib.h>

/**
 * main - calculate change in cents
 * @argc: lenght of argument
 * @argv: array of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent, div_25 = 0, rem_25 = 0, rem_10 = 0, div_10 = 0, rem_5 = 0, div_5 = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
		cent = atoi(argv[1]);
		if (cent % 25 == 0)
		{
			printf("%d\n", cent / 25);
		}
		else if (cent % 25 != 0)
		{
			div_25 = cent / 25;
			rem_25 = cent % 25;
			rem_10 = rem_25 % 10;
			if (rem_10 == 0)
			{
				printf("%d\n", (rem_25 / 10) + div_25);
			}
			else if (rem_10 != 0)
			{
				div_10 = rem_25 / 10;
				rem_5 = rem_10 % 5;
				if (rem_5 == 0)
				{
					printf("%d\n", div_25 + div_10 + (rem_10 / 5));
				}
				else if (rem_5 != 0)
				{
					if (rem_5 % 2 == 0)
					{
						printf("%d\n", div_25 + div_10 + (rem_10 / 5) + (rem_5 / 2));
					}
					else
						printf("%d\n", div_25 + div_10 + div_5 + (rem_5 / 2) + ((rem_5 % 2) / 1));

				}
			}
		}
	return (0);
}
