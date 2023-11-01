#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this functions adds end of inputs together for size
 * @s1: input value one
 * @s2: input alue two
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int x, cx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = cx = 0;
	while (s1[x] != '\0')
		x++;
	concat = malloc(sizeof(char) * (x + cx + 1));

	if (concat == NULL)
		return (NULL);
	x = cx = 0;
	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}

	while (s2[cx] != '\0')
	{
		concat[x] = s2[cx];
		x++, cx++;
	}
	concat[x] = '\0';
	return (concat);
}
