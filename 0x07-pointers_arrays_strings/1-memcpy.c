#include "main.h"
/**
 * _memcpy - this is a function that copies  memeory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: the number of bytes
 * Return: the copied memory with the n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
