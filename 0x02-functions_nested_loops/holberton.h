#include <unistd.h>
void print_alphabet()
{
int x=97;
while(x<=122)
{
_putchar(X);
x++;
}
return 0;
}
char _putchar(char c)
{
return (write(1,&c,1));
}

char new_line()
{
return (write(1,"\n",1));
}
