#include "main.h"
/**
 * *string_toupper - capitalize a string
 * @str
 * @s: pointer
 * Return: capitalzied string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
