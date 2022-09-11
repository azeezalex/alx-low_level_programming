#include <stdio.h>
/**
 *main - Prints all single digit numbers of base 10 starting from 0.
 * Return: Always 0.
 */
int main(void)
{
int N = 0;

int limit = 9;

for (N = 0; N <= limit; N++)
printf("%d", N);
printf("\n");
return (0);
}
