#include "main.h"
#include <stdio.h>
/**
 *  _pow_recursion - calculates value of x when it's raised to the power of y
 * @x: given number
 * @y: exponent
 * Return: the value of x when raised to the power of y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
