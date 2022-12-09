#include<stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'z';
	int i = 26;
	/* your code goes there */
	while (i > 0)
	{
		putchar(ch);
		ch--;
		i--;
	}
	putchar('\n');
	return (0);
}
