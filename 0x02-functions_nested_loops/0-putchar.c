#include <stdio.h>

/**
 * main - print _putchar using puchar
 *
 * Return: 0
 */
int main(void)
{
int y;
char x[8] = "_putchar";
y = 0;

while (y < 8)
{
putchar(x[y]);
y++;
}
putchar('\n');
return (0);
}
