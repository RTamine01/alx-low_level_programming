#include "main.h"

/**
 *  * more_numbers - print more numbers
 *  only use _putchar twice
 *  Return: always 0 (success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			(j > 9) ? _putchar((j / 10) + '0') : 0;
			_putchar((j % 10) + '0');
		}
		_putcharputchar('\n');
	}
}
