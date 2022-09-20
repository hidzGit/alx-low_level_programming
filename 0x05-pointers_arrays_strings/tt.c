#include <stdio.h>

int max(int a, int b,int c)
{
	int result;

	if (a >= b && a >= c)
		result = a;
	else if (b >= a && b >= c)
		result = b;
	else
		result = c;

	return (result);
}

void main(void)
{
	int x = 7;
	int y = 7;
	int z = 2;

	printf ("%c", max(x, y, z));
}
