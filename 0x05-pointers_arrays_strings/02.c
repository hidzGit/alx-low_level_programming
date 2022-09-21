#include <stdio.h>

int main()
{
	int a;
	char c;
	char *b = "what is it";


	printf("address of int a: %p\n", &a);
	printf("address of char c: %p\n", &c);
	printf("address of string b: %s\n", b);
	puts(b);
	return (0);
}
