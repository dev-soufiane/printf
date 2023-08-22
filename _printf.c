#include "main.h"

/***/

int _printf(const char *format, ...)
{
	va_list args;
	int len;
	char *str;
	char c;

	len = 0;
	va_start(args, format);
	if (!*format || !*(format + 0))
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
					format++;
					break;
				case 's':
					str = va_arg(args, char *);
					len += print_string(str);
					format++;
					break;
				case '%':
					len += print_char('%');
					format++;
					break;
			}
		}
		if (format != NULL)
		{
			print_char(*format);
			len += 1;
			format++;
		}
	}
	return (len);
}
