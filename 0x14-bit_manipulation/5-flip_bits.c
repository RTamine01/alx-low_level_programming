#include "main.h"

/**
 *  * flip_bits - gets the number of bits to flip to get from n to m
 *   * @n: initial number
 *    * @m: final number
 *     *
 *      * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
