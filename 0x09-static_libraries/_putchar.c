#include <unistd.h>

/**
 * abel
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
