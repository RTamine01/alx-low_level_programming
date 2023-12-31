#include "main.h"
#include <stdlib.h>
/**
 *  * create_array - create array of size size and assign char c
 *   * @size: size of array
 *    * @c: char to assign
 *     * Description: create array of size size and assign char c
 *      * Return: pointer to array, NULL if fail
 *       *
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
