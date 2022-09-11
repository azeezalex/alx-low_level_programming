#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Return: Always 0.
 */
int main(void)
{
char Alpha;

for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
{
if (Alpha != 'e' && Alpha != 'q')
putchar(Alpha);
}
putchar('\n');
return (0);
}
