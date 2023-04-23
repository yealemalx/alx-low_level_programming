#include <stdio.h>
/**
 * main - A program that prints size of various computer types
 * Return: 0 (Success)
 */

int main(void)
{
	char 1;
	int 4;
	long int 4;
	long long int 8;
	float 4;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(1));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(4));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(8));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(4));
return (0);
}
