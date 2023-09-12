#include "main.h"

/**
 * entry - point
 * print alphabt in lower case
 * Return: always 0 (success0)
 */

void print_alphabet(void);
{
	int ch;
	for(ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
