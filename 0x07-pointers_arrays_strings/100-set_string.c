#include "main.h"
/**
 * set_string - this function sets the value of a pointer to a char
 * @s: making pointer to a pointer
 * @to: the pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
