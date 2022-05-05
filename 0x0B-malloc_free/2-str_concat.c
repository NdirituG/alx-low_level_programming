#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	{
		unsigned int i, j, x, y, z;
		char *p;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

		for (i = 0; s1[i] != '\0'; i++)
			;

		for (j = 0; s2[j] != '\0'; j++)
			;

		p = malloc((i + j) * sizeof(char) + 1);

		if (p == NULL)
			return (NULL);

		for (x = 0; x < i; x++)
			p[x] = s1[x];

		for (y = 1, z = 0; y < i + j; y++, z++)
			p[y] = s2[z];

		p[i + j] = '\0';

		return (p);
	}
}
