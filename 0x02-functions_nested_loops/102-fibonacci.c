#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always returns 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1;
		printf("%lu", sum);

		if (count < 49)
			printf(", ");
		else
			printf("\n");

		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}

	return (0);
}
