#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - this function doubles new memory space location
 * @str: char
 * Return: Everytime returns 0 (success)
 */
char *_strdup(char *str)
{
	char *aaa;
	int x, y = 0;

	if (str == NULL)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;

	aaa = malloc(sizeof(char) * (x + 1));

	if (aaa == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		aaa[y] = str[y];

	return (aaa);
}
