#include <stdio.h>

/**
 * _strncat -  concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * @n: num of bytes to be append from src
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	/*should end with a end of string char*/
	dest[dest_len + i] = '\0';

	return (dest);
}

