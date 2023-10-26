#include "main.h"
/**
 * _print_rev_recursion - this function prints a string in reverse
 * @s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*S)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
