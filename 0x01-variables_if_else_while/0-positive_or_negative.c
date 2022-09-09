#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that confirms negative and positive numbers
 *
 * @if statement to test if a number is greater than zero
 *
 * Return: the number is neg/positive/zero
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	
		printf("%d is positive\n", n);
	else if (n == 0) 
		printf("%d is zero\n", n);	
	
	else 

		printf("%d is negative\n", n);
		
	
		return (0);
}
