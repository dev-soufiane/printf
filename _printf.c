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
	char charg;
	char *data;
	int len = 0;

	va_start(combo, format);

	if (!format || !*(format + 0))
		return (-1);

	while (*format)
	{
		len += (*format == '%') ? (
			format++,
			(*format == 'c') ? (charg = va_arg(combo, int), print_char(charg))
			: (*format == 's') ? (data = va_arg(combo, char *), print_string(data))
			: (*format == '%') ? print_char('%')
			: (print_char('%'), (*format ? print_char(*format) : 0))
		)
		: (print_char(*format));
		format++;
	}
	va_end(combo);
	return (len);
}
