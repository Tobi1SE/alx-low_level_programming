#include <stdio.h>
/**
 * main - Entry point
 * Return: Everytime return 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + 48);
	}
	putchar('\n');
	return (0);
}
