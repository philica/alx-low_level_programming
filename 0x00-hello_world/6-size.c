#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
float f;
long l;
long long ll;
char c;
printf("size of a char: %d byte(s)\n", sizeof(c));
printf("size of an int: %d byte(s)\n", sizeof(i));
printf("size of a long int: %d byte(s)\n", sizeof(l));
printf("size of a long long int: %d byte(s)\n", sizeof(ll));
printf("size of a float: %d byte(s)\n", sizeof(f));
return (0);
}

