#include "main.h"

/**
* _isupper - checks if character input is upper case
* @c: inputted character
* Return: 1 if positive and 0 if negative
*/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
