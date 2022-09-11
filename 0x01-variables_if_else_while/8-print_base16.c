#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
int N;

char alpha;

for (N = 0; N <= 9; N++)
putchar((N % 10) + '0');
for (alpha = 'a'; alpha < 'g'; alpha++)
putchar(alpha);
putchar('\n');
return (0);
}
