#include <stdio.h>
#include <ctype.h>
/**
 * main - 
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'A' ; ch <= 'Z' ; ch++)
{	
putchar(tolower(ch));
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
