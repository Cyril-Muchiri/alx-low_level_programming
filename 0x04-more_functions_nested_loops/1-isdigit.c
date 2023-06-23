#include "main.h"

/**
 * _isdigit - function declaration
 * Description: Funtion to check number 0-9
 * @c: integer initiliased
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
