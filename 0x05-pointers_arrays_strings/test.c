#include <stdio.h>


void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void main()
{
	int q = 77;
	int b = 80;

	printf("q equals %d \n", q);
	printf("b equals %d \n", b);

	swap_int(&q, &b);
	printf("q now equals %d \n", q);
	printf("b now equals %d", b);

	putchar('\n');
}
