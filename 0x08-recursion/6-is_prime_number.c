#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - this functions as identifying a prime number
 * @n: the number to check
 * Return: 1 if n is the prime number, 0 if it is not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - this function calculates the recurrence of a prime number
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is the prime number, 0 if it is not
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
