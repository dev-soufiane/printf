#include "main.h"

/**
 * _printf - The printf function clone
 * @format: a constant pointer to a char
 *
 * Return: size of the printed args
 */

int _printf(const char *format, ...)
{
	va_list combo;
	int digi;
	int len = 0;

	va_start(combo, format);
	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				len += print_char('%');
			}
			else if (*format == '\0')
			{
				break;
			}
			else
			{
				switch (*format)
				{
					case 'c':
						len += print_char(va_arg(combo, int));
						break;
					case 's':
						len += print_string(va_arg(combo, char *));
						break;
					case 'd':
					case 'i':
						digi = va_arg(combo, int);
						if (digi < 0)
						{
							len++;
						}
						len += getNumberLength(digi);
						check_number(digi);
						break;
					default:
						len += print_char('%');
						len += print_char(*format);
						break;
				}
			}
		}
		else
		{
			len += print_char(*format);
		}
		format++;
	}
	va_end(combo);
	return (len);
}
