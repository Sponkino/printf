#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/*from struct array func*/
int count_spec(char ch, va_list arg);

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *c);
int print_string(va_list s);
int print_bin(va_list b);
int print_int(va_list i);
int print_char(va_list c);
int print_percentage(void);
int print_dec(va_list d);

/*from specifer functions.c */
int use_c(va_list arg);
int use_s(va_list arg);
int use_i(va_list arg);

/**
 * struct ch - struct ch
 * @str: pointer to string
 * @f: funtion pointer
 */

typedef struct ch
{
                char *str;
                        int (*f)(va_list);
} chr_st;

#endif
