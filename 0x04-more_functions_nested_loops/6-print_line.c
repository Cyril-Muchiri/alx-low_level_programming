#include "main.h"

/**
 * print_line - entry point
 * @n: number of lines
 * Return:void
 */

void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		if (line <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
