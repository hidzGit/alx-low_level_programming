#include <stdio.h>

int main()
{
    char counter='a';
    while (counter <='z')
    {
	 if (counter=='e')
	 {
	      continue;
	 }
	 printf("%c  ", counter);
	 counter++;
    }
    return 0;
}
