#include "main.h"
/**
 * _islower - Short description, single line
 * @c: contains value to be compared
 * Return: 1 is true, 0 is false
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
