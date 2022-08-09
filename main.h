#ifndef MAIN_H

#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
int print_string(va_list args);
int print_char(va_list args);

#ifndef MAIN_H

#define MAIN_H

#include <stdlib.h>

#include <stdarg.h>

/**

- struct flags - struct containing flags to "turn on"
- when a flag specifier is passed to _printf()
- @plus: flag for the '+' character
- @space: flag for the ' ' character
- @hash: flag for the '#' character

 */

typedef struct flags

{

    int plus;

    int space;

    int hash;

} flags_t;

/**

- struct printHandler - struct to choose the right function depending
- on the format specifier passed to _printf()
- @c: format specifier
- @f: pointer to the correct printing function

 */

typedef struct printHandler

{

    char c;

    int (_f)(va_list ap, flags_t _f);

} ph;

/_ print_number _/

int print_int(va_list l, flags_t *f);

void print_number(int n);

int print_unsigned(va_list l, flags_t *f);

int count_digit(int i);

/_ print_bases _/

int print_hex(va_list l, flags_t *f);

int print_hex_big(va_list l, flags_t *f);

int print_binary(va_list l, flags_t *f);

int print_octal(va_list l, flags_t *f);

/_ converter _/

char *convert(unsigned long int num, int base, int lowercase);

/_ _printf _/

int _printf(const char *format, ...);

/_ get_print _/

int (_get_print(char s))(va_list, flags_t _);

/_ get_flag _/

int get_flag(char s, flags_t *f);

/_ print_alpha _/

int print_string(va_list l, flags_t *f);

int print_char(va_list l, flags_t *f);

int _putchar(char c);

/_ write_funcs _/

int _putchar(char c);

int _puts(char *str);

/_ print_custom _/

int print_rot13(va_list l, flags_t *f);

int print_rev(va_list l, flags_t *f);

int print_bigS(va_list l, flags_t *f);

/_ print_address _/

int print_address(va_list l, flags_t *f);

/_ priint_percent _/

int print_percent(va_list l, flags_t *f);

#endif

