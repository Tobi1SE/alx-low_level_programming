#include "main.h"
/**
 * print_chessboard - the entry point
 * @a: array
 * REturn: Everytime return 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int x;
	int y;

	for (x = 0; x < 0; x++)
	{
		for (y = 0; y < 0; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
