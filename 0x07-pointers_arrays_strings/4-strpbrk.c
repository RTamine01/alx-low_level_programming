#include "main.h"
/**
 *  * _strpbrk - Entry point
 *   * @s: input
 *    * @accept: input
 *     * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int ac, ab;
	char *p;

	ac = 0;
	while (s[ac] != '\0')
	{
		ab = 0;
		while (accept[ab] != '\0')
		{
			if (accept[ab] == s[ac])
			{
				p = &s[ac];
				return (p);
			}
			ab++;
		}
		ac++;
	}
	return (0);
}
