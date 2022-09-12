#include <stdio.h>
/**
 *  main - Prints all possible combinations of three different digits,
 * in ascending order, separated by a comma followed by a space.
 *  Return: Always 0.
 */
int main(void)
{
int M;

int N;

int O;

for (M = 0; M < 8; M++)
{
for (N = M + 1; N < 9; N++)
{
for (O = N + 1; O < 10; O++)
{
putchar((M % 10) + '0');
putchar((N % 10) + '0');
putchar((O % 10) + '0');
if (M == 7 && N == 8 && O == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
