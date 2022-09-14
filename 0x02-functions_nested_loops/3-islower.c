#include "main.h"

/**
 * _islower - check if the input character is lowercase or not
 * @c: character inputted
 * Return: 1 if it is a lowercase, 0 if not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
