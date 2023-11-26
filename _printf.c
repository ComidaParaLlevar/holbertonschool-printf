#include "main.h"
/**
 * _printf - prints formated output
 * @format: string to evaluate
 * @...: variadic function
 * Return: ammount of chars written
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int c = 0;
	int (*fun)(va_list);

	if (format == NULL)
		return (-1);
	va_start(arg, format);

	while(*format)
	{
		if (*format == '%')
		{
			format++;
			fun = get_f(format);
			if (fun == NULL)
			{
				if (*format == '\0')
					return (-1);
				if (*format == '!')
				{
					c += _putchar('!');
					format++;
					continue;
				}
				else
					c += _putchar('%');
			}
			else
			{
				c += fun(arg);
				format++;
				continue;
			}
		}
		else
			c += _putchar(*format);
		format++;
	}
	va_end(arg);
	return (c);
}
