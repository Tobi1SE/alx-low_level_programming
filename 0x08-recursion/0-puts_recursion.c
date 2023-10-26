#include "main.h"
/**
 * _puts_recursion - this functions exactly like puts();
 * @s: input value
 * Return: Everytime return 0 (success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
