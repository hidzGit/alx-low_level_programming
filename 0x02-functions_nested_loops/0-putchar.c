#include "main.h"

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
_putchar(x[y]);
y++;
}
_putchar('\n');
return (0);
}
