#include "main.h"
/**
 *  * _strspn - Entry point
 *   * @s: input
 *    * @accept: input
 *     * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ac, ab;

	for (ac = 0; s[ac] != '\0'; ac++)
	{
		for (ab = 0; accept[ab] != s[ac]; ab++)
		{
			if (accept[ab] == '\0')
				return (ac);
		}
	}
	return (ac);
}
