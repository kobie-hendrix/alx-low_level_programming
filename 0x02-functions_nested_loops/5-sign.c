#include "main.h"

/**
 * print_sign - Determines if the input number
 * greater, equal or less than zero.
 *
 * @n: The input number as an integer.
 *
 * Return: 1 is greater thanzero. 0 is zero.
 * -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (< 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		putchar(48);
		return(0);
	}
	_putchar('\n');
}
