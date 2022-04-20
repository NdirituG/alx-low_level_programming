#include "main.h"
/**
 * _strlen - Function that returns the length of a string
 * @s: String to be check
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (1)
	{
		if (*(s + count) == '\0')
		{
			break;
		}
		count++;
	}

	return (count);
}
