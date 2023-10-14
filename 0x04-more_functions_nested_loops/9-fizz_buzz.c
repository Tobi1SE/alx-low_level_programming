#include <stdio.h>

/**
 * main - prints the number from 1 - 100, followed by a line
 * but for multiples of 3 prints Fizz instead of the number
 * and for the multiples of 5 prints Buzz
 * Return: Everytime return 0 (success)
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf(" Fizz");
		} else if (x % 5 == 0 && x % 3 != 0)
		{
			printf(" Buzz");
		} else if (x % 3 == 0 && x % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (x == 1)
		{
			printf("%d", x);
		} else
		{
			printf(" %d", x);
		}
	}
	printf("\n");

	return (0);
}
