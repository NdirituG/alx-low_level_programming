#include "main.h"
#include <string.h>

/**
 * string_toupper - changes lowercase letters to uppercase
 * @str: string to be uppercased
 * Return: the resulting string
 */

char *string_toupper(char *str)
{
	/*strupr(str);*/
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
