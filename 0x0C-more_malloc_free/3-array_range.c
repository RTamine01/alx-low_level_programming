#include <main.h>

/**
 *   * array_range - ...
 *     * @min: ...
 *       * @max: ...
 *         *
 *           * Return: integer value
 */
int *array_range(int min, int max)
{
	int *x, y = 0;

	if (min > max)
		return (NULL);

	x = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (x == NULL)
		return (NULL);

	while (min <= max)
	{
		x[y] = min;
		y++;
		min++;
	}
	return (x);
}
