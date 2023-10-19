#include "main.h"
/**
 * _strcat - this is a function that concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++, i++)
	{
	dest[i] = src[k];
	}
	dest[i] = '\0';
	return (dest);
}
