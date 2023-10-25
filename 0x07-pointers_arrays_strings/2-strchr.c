#include "main.h"
/**
 * _strchr - the entry point
 * @s: input
 * @c: input
 * Return: Everytime return 0 (success)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
