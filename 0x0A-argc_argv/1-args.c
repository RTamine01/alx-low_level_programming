#include <stdio.h>

/**
 *  * main - print number of arguments passed.
 *   * @argc: number of command line arguments.
 *    * @argv: pointer to array of command line arguments.i
 *      * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
