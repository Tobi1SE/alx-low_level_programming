#include "main.h"
#include <unistd.h>
/**
 * _putchar - this functions writes a charcter c to stdout
 * @c: the charcater that print
 * Return: return 1 (success)
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
