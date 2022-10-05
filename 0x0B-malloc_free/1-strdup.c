#include "main.h"

char *_strdup(char *str)
{
	char *n_str;
	int i = 0, x = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		i++;
	}
	i = i + 1;
	n_str = malloc(sizeof(char) * i);
	if (n_str == NULL)
		return (NULL);
	while (x < i)
	{
		str[x] = n_str[x];
			x++;
	}
	n_str[i] = '\0';

	return (n_str);
}
