#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned int fib1 = 1, fib2 = 2, next;

	printf("%u, %u, ", fib1, fib2);

	for (i = 3; i <= 98; i++)
	{
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;

		if (i < 98)
			printf("%u, ", next);
		else
			printf("%u\n", next);
	}

	return (0);
}
