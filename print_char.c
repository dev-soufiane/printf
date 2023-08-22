#include "main.h"

/**
 * print_char - Prints a character
 * @c: char
 *
 * Return: Number of chars printed
 */

int print_char(char c)
{
	write(1, &c, 1);

	return (1);
}
