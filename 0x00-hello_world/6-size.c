#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %lu 1 byte(s\n", sizeof(char));
	printf("Size of an int: %lu 1 byte(s\n", sizeof(int));
	printf("Size of a long int: %lu 1 byte(s\n", sizeof(long int));
	printf("Size of a long long int: %lu 1 byte(s\n", sizeof(long long int));
	printf("Size of a flost: %lu 1 byte(s\n", sizeof(float));
	return (0);

}
