#include <stdio.h>

/**
 *
 *  * main - Prints the lowercase alphabet in reverse.
 *
 *   * Return: Always 0.
 *
 *    */

int main(void)

{
char Alpha;

for (Alpha = 'z'; Alpha >= 'a'; Alpha--)
putchar(Alpha);
putchar('\n');
return (0);
}
