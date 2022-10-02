#include "main.h"
/**
 * _isalpha - check if an input is a letter, upper or lower
 * @c: inputted character
 * Return: 1 if it's a letter, 0 if it's not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
