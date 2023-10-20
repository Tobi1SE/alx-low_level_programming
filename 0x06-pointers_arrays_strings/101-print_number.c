#include "main.h"

/**
 * print_number - this function prints number chars
 * @n: integer params
 * Return: Everytime return 0 (success)
 */

void print_number(int n)
{
	unsigned int nl;

	nl = n;
	if (n < 0)
	{
		_putchar('-');
		nl = -n;
	}
	if (nl / 10 != 0)
	{
		print_number(nl / 10);
	}
	_putchar((nl % 10) + '0');
}
