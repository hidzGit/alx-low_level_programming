#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				start = i;
			}
			break;
		}
		if (haystack[i] == needle[j]) 
		{
			for (;needle [j] != '\0' && haystack[i] == needle[j]; i++, j++)
			{
				return (&haystack[start]);
			}
		}
		else
			return (NULL);
	}
	return(NULL);
}
