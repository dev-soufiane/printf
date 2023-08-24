#include "main.h"

/**
 * print_char - Prints a character
 * @any_char: char
 *
 * Return: Number of chars printed
 */

int print_char(char any_char)
{
	write(1, &any_char, 1);

	return (1);
}
