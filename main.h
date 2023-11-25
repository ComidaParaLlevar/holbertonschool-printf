#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>

int _printf(const char *, ...);
int (*get_f(char specifier))(char *, va_list)

int f_c(int c);
int f_s(va_list arg);
int f_mod(va_list arg);

/**
 * struct get_functions - struct to get function of spec
 * @s: specifier
 * @f: function to use
 */

typedef struct get_functions
{
  char s;
  int (*f)(va_list);
} get_f;

#endif
