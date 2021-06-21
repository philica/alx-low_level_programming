#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
char x = 'A';
while (x <= 'z')
{
x = tolower(x);
putchar(x);
x++;
}
putchar('\n');
return (0);
}
