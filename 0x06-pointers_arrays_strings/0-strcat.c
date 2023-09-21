#include "main.h"

/**
 *  * _strcat - concatenates two strings
 *   * @dest: destination string
 *    * @src: source string
 *
 *      * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c++)
		dest[c++] = src[c2];

	return (dest);
}
