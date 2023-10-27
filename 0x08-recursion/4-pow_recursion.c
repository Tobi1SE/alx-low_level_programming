#include "main.h"
/**
 * _pow_recursion - this functions substituting the value of x to y
 * @x: input value
 * @y: input value
 * Return: Outcome of the input
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
