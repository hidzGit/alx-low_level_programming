#include "main.h"

/**
 * main - print program name
 * @argc: argument number
 * @argv: argument array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	return (0);
}
