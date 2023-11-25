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
	va_list arg;                        //variadic function values
	int c = 0, i = 0;                   //counter & index

	va_start(arg, format);

	if ((!format) || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			f_c(format[i]);
			c++;
		}
		if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
		{
			c += get_f(*(format + (i + 1)), arg);
			i += 2;
			continue;
		}
		else if ((format[i] == '%' && format[i + 1] == 'K') ||
				(format[i] == '%' && format[i + 1] == '!'))
		{
			f_c(format[i]);
			c++;
		}
		i++
	}
	va_end(arg);
	return (c);
