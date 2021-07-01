#include "holberton.h"
/**
 *  * _strncat - concatenate two strings
 *   * using at most n bytes from src
 *    * @dest: input value
 *     * @src: input value
 *      * @n: input value
 *       *
 *        * Return: dest
 *         */
char *_strncat(char *dest, char *src, int n)
{
	int i=0;
	int j=0;
	while(dest[i]!="\0")
	{
		i++;
	}
	while(j<n && src[j]!="\0")
	{
		
		dest[i]=src[j];
		j++;
		i++;
		
	}
	dest[i]="\0";
	return (dest);
}
