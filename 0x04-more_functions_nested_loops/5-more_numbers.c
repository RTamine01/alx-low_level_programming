#include "main.h"

/**
 *  * more_numbers - print more numbers
 *  only use _putchar twice
 *  Return: always 0 (success)
 */

void more_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
i	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
