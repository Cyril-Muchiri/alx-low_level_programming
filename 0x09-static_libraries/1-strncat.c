#include "main.h"

/**
  * _strncat - concatenates n bytes from one string to another
  * @dest: destination string
  * @src: source string
  * @n: number of bytes of str to concatenate
  *
  * Return: a pointer to destination
  */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}

	return (dest);
}
