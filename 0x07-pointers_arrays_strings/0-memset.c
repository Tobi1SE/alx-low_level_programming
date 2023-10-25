#include "main.h"
/**
 * _memset - this is to fill a block of memory with a definite value
 * @s: this starts and address of a memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: chnaged array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
