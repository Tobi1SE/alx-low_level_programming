#include "main.h"

/**
 * print_array - this is a function that prints the n  elements of an array
 * @a: name of the array
 * @n: this is the number of the elements of the array that would be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
		if (x == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
