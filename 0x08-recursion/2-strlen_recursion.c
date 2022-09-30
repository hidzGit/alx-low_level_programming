#include <stdio.h>

/**
 * _strlen_recursion - print length of string using recursion
 * @s: the string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		_putchar(0);
	else
	{
		i++;
		i = _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
