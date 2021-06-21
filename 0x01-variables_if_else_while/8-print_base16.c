#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = 0;
char str = 'a';
while (num < 10)
{
putchar (num % 10 + '0');
num++;
}
while (str <= 'f')
{
putchar(str);
str++;
}
putchar('\n');
return (0);
}
