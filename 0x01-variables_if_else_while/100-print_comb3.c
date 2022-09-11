#include <stdio.h>
/**
 * main - Write a program that prints all possible 
 * different combinations of two digits
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
putchar(',');
putchar(' ');
continue;
}
}
}
putchar('\n');
return (0);
}
