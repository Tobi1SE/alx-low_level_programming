#include "main.h"

/**
 * print_digit - Print a single digit with proper formatting.
 *
 * @num: The digit to be printed.
 */
void print_digit(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num >= 10 && num < 100)
	{
		_putchar(' ');
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar((num / 100) + '0');
		_putchar(((num / 10) % 10) + '0');
		_putchar((num % 10) + '0');
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: The number of times tables to print
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, result;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					print_digit(result);
				}
			}
			_putchar('\n');
		}
	}
}
