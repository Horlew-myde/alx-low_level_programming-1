#include "main.h"

/**
 ** print_sign - Prints the sign of a number.
 ** @n: The number of which the sign will be printed.
 **
 ** Return: 1 if positive, 0 if zero, -1 if negative
 **
 **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
