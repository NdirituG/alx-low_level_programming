#include "main."
/**
 * puts2 - Function that prints one char out of 2 of a string
 * @str: String to be used
 */
void puts2(char *str)
{
	int i = 0, len = 0;

	while (1)
	{
		if(str[len] == '\0')
			break;

		len++;
	}

	for (i = 0; i < len; i += 2)
		_putchar(*(str + 1));

	_putchar(10);
}
