#include <stdio.h>
/**
 * main - Entry point
 * Return: Everytime return 0 (success)
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
