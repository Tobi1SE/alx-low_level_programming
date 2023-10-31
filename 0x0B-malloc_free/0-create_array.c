#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function writes an array of size and assign char o
 * @size: size of array
 * @o: char to assign
 * Description: write an arrary of size and assign char o
 * Return: ointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
