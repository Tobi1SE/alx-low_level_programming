#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * Return: Everytime return 0 (success)
 */
void print_rev(char *s)
{
	int longi = 0;

	int 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (0 = long1; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
