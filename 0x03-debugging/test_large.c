#include <stdio.h>

/**
*largest_number - returns the largest of 3 numbers
*@a: first integer
*@b: second integer
*@c: third integer
*Return: largest number
*/


	int largest_no(int a, int b, int c)
	{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	printf("%d", largest);
	return (largest);
	
	}
int main(void)
{
	int a = 78;
	int b = 88;
	int c = -8;
	int largest;
	
	int largest_no(int a, int c, int b);

}
