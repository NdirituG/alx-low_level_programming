#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - Function that prints half of a string
 * @str: String to be used
 */
void puts_half(char *str)
{
	int len, i, hlf;

	len = strlen(str);

	if (len % 2 == 0)
	{
		hlf = len / 2;
		for (i = hlf; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		hlf = (len + 1) / 2;
		for (i = hlf; str[i] != '\0'; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
