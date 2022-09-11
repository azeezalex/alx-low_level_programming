#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
int N;

int M;

for (N = 0; N <= 9; N++)
{
for (M = 0; M <= 9; M++)
{
if ((N != M) && (N < M))
{
putchar((N % 10) + '0');
putchar((M % 10) + '0');
if ((N < 8) && (M < 9))
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
