#include "holberton.h"
/**
 *_sqrt_recursion - return square root of a given number
 *@n: given number
 *@y: square root of the given number(if it has)
 *@x: operator variable
 *Return: square root of the given number 
 **/
int x = 1;
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (x < n)
	{
		if ((x * x) == n)
		{
			int y = x;
			x = 1;
			return (y);
		}
		if ((x * x) > n)
		{
			return (-1);
		}
		else
		{
			x++;
			_sqrt_recursion(n);
		}
	}
}
