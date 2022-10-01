#include "main.h"

/**
 * main - print main arguments
 * @argc: length of argument
 * @argv: array of strings for arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
