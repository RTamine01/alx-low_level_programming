#include "main.h"
/**
 *  * _strchr - Entry point
 *   * @s: input
 *    * @c: input
 *     * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int ac;

	for (ac = 0; s[ac] >= '\0'; ac++)
	{
		if (s[ac] == c)
		{
			return (s + ac);
		}
	}
	return ('\0');
}
