#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always returns 0 (success).
 */
int main(void)
{
	int i;
	unsigned long j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum += j;
		}
		next = j + k;
		j = k;
		k = next;
	}

	printf("The sum of even-valued terms not exceeding 4,000,000 is: %lu\n", sum);

	return (0);
}
