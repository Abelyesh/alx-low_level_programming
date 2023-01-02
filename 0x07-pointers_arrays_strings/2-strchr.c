#include "main.h"
char *_strchr(char *s, char c)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
		else if (s[j] == '\0')
		{
			s = '\0';
		}
	}
	return (s);
}
