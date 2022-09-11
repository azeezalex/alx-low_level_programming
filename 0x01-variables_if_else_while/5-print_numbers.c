#include <stdio.h>
/**
*Write a program that prints all single digit numbers of 
*base 10 starting from 0, followed by a new line.
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
