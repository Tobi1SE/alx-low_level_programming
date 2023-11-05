#include "main.h"
#include <stdlib.h>
/**
 * _realloc - this function reallocates a memory block
 * using malloc and free
 * @ptr: former pointer to the old memoery allocated
 * by malloc
 * @old_size: old size allocated by malloc in the memory block
 * @new_size: new size allocated by the _realloc function
 * Return: pointer to the bewly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t x, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; x++)
		p[x] = oldp[x];
	free(ptr);
	return (p);
}
