#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: print alphabet in lowercase than in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char ck = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints A - Z*/
	while (ck <= 'Z')
	{
		putchar(ck);
		ck++;
	}
	putchar('\n');

	return (0);
}
