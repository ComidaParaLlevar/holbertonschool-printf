#include "main.h"
/**
 * get_f - gets appropiate function for _printf
 * @specifier: string specifier
 * Return: positiong of function
 */

int (*get_f(char specifier))(char *, va_list)
{
	int i = 0;

	get_f f_arr[] = {
		{"c", f_c},
		{"s", f_s},
		{"%", f_mod},
		{NULL, NULL}
	};

	while (f_arr[i].s)
	{
		if (specifier == *f_arr[i].s)
			break

		i++
	}
return (f_arr[i].f);
}
