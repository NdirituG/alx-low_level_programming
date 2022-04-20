#include "main.h"
/**
 * rev_string - Function that prints reverse string
 * @s: String to be checked
 */
void rev_string(char *s)
{
	int i, j, tmp, len = 0;

	while (1)
	{
		if (s[len] == '\0')
			break;

		len++;
	}

	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp = *(s + j);
			*(s + j) = *(s + j - 1);
			*(s + j - 1) = tmp;
		}
	}
}
