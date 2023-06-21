#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to checked
 * Return: 1 Always success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
