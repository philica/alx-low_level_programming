#include "holberton.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to a string
 * Return: length of the string
 **/
int _strlen_recursion(char *s)
{
	
	if (*s != '\0')
	{

		i++;
		_strlen_recursion(s+1);

	}
	return i;
}
