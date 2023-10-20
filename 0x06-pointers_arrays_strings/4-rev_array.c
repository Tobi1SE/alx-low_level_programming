#include "main.h"
/**
 * reverse_array - this functions as reverse arrary of integers
 * @a: array
 * @n: the number of elemnets of aary
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
