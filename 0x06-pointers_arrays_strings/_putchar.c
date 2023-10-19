#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: to print character
 *
 * Return: Everytime return 1 (success)
 * on error, -1 is returned, and errno is set appropritely,
 */
int _putcchar(char c)
{
	return (write(1, &c, 1));
}
