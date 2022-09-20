#include "main.h"

/**
 * puts_half - starts printing from halfway a string
 * @str: string pointer
 */

void puts_half(char *str)
{
	int length = 1;
	int mnum;
	int mmnum;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (mnum = length / 2; mnum <= length; mnum++)
			_putchar(str[mnum]);
	}
	else
	{
		for ((mmnum = (length - 1) / 2); mmnum <= length; mmnum++)
			_putchar(str[mmnum]);
	}
	_putchar('\n');
}
