#include "main.h"
#include <stdlib.h>

/**
 * main - add arguments ints
 * @argc: length of argument
 * @argv: string of arg
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1, len = 0, boool = 0, x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i > 0; i++)
	{
		if (*argv[i] <= '/' || *argv[i] >= ':')
		{
			boool = 1;
			printf("Error\n");
			return (1);
		}
	}
	if (boool == 0)
	{
		i = 1;
		while (i < argc)
		{
			x = atoi(argv[i]);
			len += x;
			i++;
		}
		printf("%d", len);
	}
	return (0);

}
