#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* find length of dest up to null character */
	i = 0;
	while (dest[i])
		i++;

	/* concatenate the two string until end of src */
	for (j = 0; src[j]; i++, j++)
		dest[i] = src[j];

	return (dest);
}
