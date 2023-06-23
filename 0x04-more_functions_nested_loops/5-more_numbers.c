#include "main.h"

/**
 * more_numbers - entry point
 * Return:void
 */

void more_numbers(void)
{
	int i=0;

	while(i<10)
	{
		int j;
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
