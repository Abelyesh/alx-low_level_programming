#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int lenght;
	int i;
	int j;

	length = 0;
	while (s[lenght] != '\0')
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	s = '\0';
	return (s);
}
