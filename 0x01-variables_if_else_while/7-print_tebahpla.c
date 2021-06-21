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
int num;
num = 'z';
while (num >= 'a')
{
putchar(num);
num--;
}
putchar('\n');
return (0);
}
