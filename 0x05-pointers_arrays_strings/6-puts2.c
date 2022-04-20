#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - Function that prints one char out of 2 of a string
 * @str: String to be used
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}

	putchar('\n');
}
