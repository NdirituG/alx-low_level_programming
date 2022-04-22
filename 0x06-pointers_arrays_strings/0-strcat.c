#include "main.h"
#include <string.h>

/**
 * _strcat - Function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string
 */

char *strcat(char *dest, char *src)
{
	/*int 11, 12, i;*/
	strcat(dest,src);
	/**
	 * 11 = strlen(dest);
	 * 12 = strlen(src);
	 * for (i = 0; i <= 12; i++)
	 * {
	 * 	*dest[ 11 + 1] = src[i];
	 * }
	 */
	return (dest);
}
