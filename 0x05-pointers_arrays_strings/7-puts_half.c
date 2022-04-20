#include "main.h"
/**
 * puts_half - Function that prints half of a string
 * @str: String to be used
 */
void puts_half(char *str)
{
	int len = 0, i, hlf;

	while (1)
	{
		if (str[len] == '\0')
			break;

		len++;
	}

	if (len % 2 == 0)
	{
		hlf = len / 2;

		for (i = hlf; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		hlf = (len - 1) / 2;

		for (i = len - hlf; i < len; i++)
			_putchar(str[i]);
	}
}
