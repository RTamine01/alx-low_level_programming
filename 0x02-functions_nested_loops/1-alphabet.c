#include "main.h"

/**
 * entry - point
 * print alphabt in lower case
 * print_alphabet _ print alphabet with _putchar function
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
