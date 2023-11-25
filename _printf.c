#include "main.h"
/**
 * _printf - prints formated output
 * @format: string to evaluate
 * @...: variadic function
 *
 * Return: ammount of chars written
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int c = 0, i = 0;
	int (*fun)(va_list);
	va_start(arg, format);

	if ((!format) || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}

	fun = get_f(format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			c++;
		}
		if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
		{
			c += fun(arg);
			i += 2;
			continue;
		}
		else if ((format[i] == '%' && format[i + 1] == 'K') ||
				(format[i] == '%' && format[i + 1] == '!'))
		{
			_putchar(format[i]);
			c++;
		}
		i++;
	}
	va_end(arg);
	return (c);
}
