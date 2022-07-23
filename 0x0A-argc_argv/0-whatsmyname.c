#include <stdio.h>

/**
 *main - this program prints its name followed by a new line
 *@argc: argc params
 *@argv: argv parameter
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
