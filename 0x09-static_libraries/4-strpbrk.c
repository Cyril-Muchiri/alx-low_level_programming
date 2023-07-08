#include "main.h"
/**
 * _strpbrk - locates the first occurrence in a string of any bytes
 * @s: string to search
 * @accept: search criteria
 * Return: pointer to first occurrence on success, else null.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return (0);
}
