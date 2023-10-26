#include "main.h"
/**
 * _puts_recursion - this functions exactly like puts();
 * @s: input value
 * Return: Everytime return 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_rrecursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
