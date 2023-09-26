#include "main.h"
/**
 *  * print_chessboard - Entry point
 *   * @a: array
 *    * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int ac, ab;

	for (ac = 0; ac < 0; ac++)
	{
		for (ab = 0; ab < 0; ab++)
		{
			_putchar(a[ac][ab]);
		}
		_putchar('\0');
	}
}
