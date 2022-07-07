#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code for uppercase character
 * @c: input chart
 * Return: Always 0 if not upper, i if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
