#include <unistd.h>

char _putchar(char c)
{
return (write(1,&c,1));
}

char new_line()
{
return (write(1,"\n",1));
}
