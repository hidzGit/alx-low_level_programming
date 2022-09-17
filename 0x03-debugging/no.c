#include <stdio.h>

int main(void)
{
	int i;
	i = 9;

	while (--i)
	{
		printf("%d", i);
	}
	printf("\n");
	
	i = 9;

	while (i--)
	{
		printf("%d", i);
	}
	printf("\n");
	
	i = 9;

	/**
	 *while (++i)
	*{
	*	printf("%d", i);
	*}
	*printf("\n");

	*i = 9;

	*while (i++)
	*{
	*	printf("%d", i);
	*}
	*printf("\n");
	*/
	return (0);
}
