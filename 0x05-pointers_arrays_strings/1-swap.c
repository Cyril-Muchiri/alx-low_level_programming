#include "main.h"
/**
 * swap_int - swaps the value of integers using pointers
 * @a: first integer pointer
 * @b: second integer pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
