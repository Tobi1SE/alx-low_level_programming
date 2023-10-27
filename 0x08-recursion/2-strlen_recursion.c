#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string
 * @s: measured string
 * Return: Void
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
