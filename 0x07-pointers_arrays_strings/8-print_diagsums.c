#include "main.h"
#include <stdio.h>
/**
 *  * print_diagsums - Entry point
 *   * @a: input
 *    * @size: input
 *     * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int ac, s1 = 0, s2 = 0;

	for (ac = 0; ac < size; ac++)
	{
		s1 += a[ac];
		s2 += a[size - ac - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
