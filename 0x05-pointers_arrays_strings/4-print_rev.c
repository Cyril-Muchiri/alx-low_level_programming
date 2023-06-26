#include "main.h"

/**
  * print_rev - prints characters in reverse using pointer
  * @str: string constant
  * Return: void
  */

void print_rev(char *str)
{
	int rev;

	rev = 0;
	while (str[rev])
	{
		rev++;
	}
	while (rev > 0)
	{
		_putchar(str[rev - 1]);
		rev--;
	}
	_putchar('\n');
}
