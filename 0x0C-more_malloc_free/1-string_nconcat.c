#include "main.h"

/**
 * *string_nconcat - Concatenates two strings using at
 * *most an inputted number of bytes.
 * *@s1: The first string.
 * *@s2: The second string.
 * *@n: The maximum number of bytes of s2 to concatenate to s1.
 * *
 * *Return: If the function fails - NULL.
 * *Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_length, s2_length;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 == "";
	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[i];
		i++;
	}

	str[i] = '\0';
	return (str);
}
