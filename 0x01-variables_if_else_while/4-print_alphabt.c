#include <stdio.h>

/**
 * main - print a -z
 *
 * skip e and q
 */
int main(void)
{
	char alphabet;
	alphabet = 'a';

	while (alphabet <= 'z'){
		
	if ((alphabet=='e') || (alphabet=='q')){
		alphabet++;
		continue;
	}

	printf("%c", alphabet);
	alphabet++;
	}
	return 0;
}
