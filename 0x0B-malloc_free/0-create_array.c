#include "main.h"
#include "stdlib.h"
/**
  * create_array - a function to create array of chars, and initialize,
  * it with a specific char.
  * @size: size of the array to create
  * @c: char to initialize the array c
  *
  * Return: pointer to the array (Success), NULL (Error)
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i ;

	s = malloc(size * sizeof(char));

	if (s == NULL || size == 0)
		return (NULL);
	for (i=0 ; i < size ; i++)
		s[i] = c;
		return (s);
}
