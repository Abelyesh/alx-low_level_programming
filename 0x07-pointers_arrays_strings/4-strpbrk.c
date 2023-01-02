#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	int lenght;
	int i;
	int j;

	lenght = 0;
	while (s[lenght] != '\0')
	{
		lenght++;
	}
	for (i = 0; i <= lenght; i++)
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
