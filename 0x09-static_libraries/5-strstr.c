#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j, pos;

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			pos = i;
		}
	}

	for (; *(haystack + pos); pos++, j++)
	{
		if (haystack[pos] != needle[j])
		{
			return(0);
		}
	}
	return ((haystack + pos));
} 
