#include "main.h"

/**
 * _printf - The printf function clone
 * @format: a constant pointer to a char
 *
 * Return: size of the printed args
 */

int _printf(const char *format, ...)
{
	va_list args;
	int len;
	char *str;
	char c;

	len = 0;
	va_start(args, format);
	if (!format || !*(format + 0))
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = va_arg(args, int);
					len += print_char(c);
					break;
				case 's':
					str = va_arg(args, char *);
					len += print_string(str);
					break;
				case '%':
					len += print_char('%');
					break;
				default:
					len += print_char('%');
					len += print_char(*format);
					break;
			}
			format++;
		}
		else
		{
			print_char(*format);
			len += 1;
			format++;
		}
	}
	va_end(args);
	return (len);
}
