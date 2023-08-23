#include "main.h"

/**
 * print_string - Prints a string
 * @s: string pointer
 *
 * Return: size of the string
 */

int print_string(char *s)
{
	int strlen = 0;

	if (s == NULL)
	{
		strlen += write(1, "(null)", 6);
		return (strlen);

	}

	while (*(s + strlen))
	{
		write(1, s + strlen, 1);
		strlen++;
	}

	return (strlen);
}
