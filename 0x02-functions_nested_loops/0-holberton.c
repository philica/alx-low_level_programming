#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
return (write(1,&c,1));
}

char new_line()
{
return (write(1,"\n",1));
}
int main(void)
{
_putchar('H');
_putchar('o');
_putchar('l');
_putchar('b');
_putchar('e');
_putchar('r');
_putchar('t');
_putchar('o');
_putchar('n');
new_line();
return 0;
}
