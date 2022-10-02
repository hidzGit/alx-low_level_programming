#include "main.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cent = atoi(argv[1]), div_25 = 0, rem_25= 0, rem_10 = 0, div_10 = 0, rem_5 = 0, div_5 = 0, div_2 = 0, rem_2 = 0;

	if (argc != 2 || *argv[1] <= '/' || *argv[1] >= ':')
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (cent % 25 == 0)
		{
			printf("%d", cent / 25);
			return (0);
		}
		else if (cent % 25 != 0)
		{
			div_25 = cent / 25;
			rem_25 = cent % 25;
			rem_10 = rem_25 % 10;
			if (rem_10 == 0)
			{
				printf("%d", (rem_25 / 10) + div_25);
				return 0;
			}
			else if (rem_10 != 0)
			{
				div_10 = rem_25 / 10;
				rem_5 = rem_10 % 5;
				if (rem_5 == 0)
				{
					printf("%d", div_25 + div_10 + (rem_10 / 5));
					return (0);
				}
				else if (rem_5 != 0)
				{
					div_5 = rem_10 / 5;
					rem_2 = rem_5 % 2;
					if (rem_2 == 0)
					{
						printf("%d", div_25 + div_10 + div_5 + (rem_5 / 2));
						return (0);
					}
					else if (rem_2 != 0)
					{
						div_2 = rem_5 / 2;
						/*rem_1 = rem_2 % 1;*/
						printf("%d", div_25 + div_10 + div_5 + div_2 + (rem_2 / 1));
						return (0);
					}

				}
			}
		}
	}
	return (0);
}
