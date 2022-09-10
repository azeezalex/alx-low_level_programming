#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char charac;

int inter;

long longg;

long long longlong;

float floatt;

printf("Size of a char: %lu byte(s)\n", sizeof(charac));
printf("Size of an int: %lu byte(s)\n", sizeof(inter));
printf("Size of a long int: %lu byte(s)\n", sizeof(longg));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlong));
printf("Size of a float: %lu byte(s)\n", sizeof(floatt));
return (0);
}
