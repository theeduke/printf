#include "main.h"

#include <limits.h>

#include <stdio.h>

int _printf(const char *format, ...)

{

    int (_pfunc)(va_list, flags_t _);

    const char *i;

    va_list arguments;

    flags_t flags = {0, 0, 0};

    register int count = 0;

    va_start(arguments, format);

    if (!format || (format[0] == '%' && !format[1]))

        return (-1);

    if (format[0] == '%' && format[1] == ' ' && !format[2])

        return (-1);

    for (i = format; *i; i++)

    {

        if (*i == '%')

        {

            i++;

            if (*i == '%')

            {

                count += _putchar('%');

                continue;

            }

            while (get_flag(*i, &flags))

                i++;

            pfunc = get_print(*i);

            count += (pfunc)

                ? pfunc(arguments, &flags)

                : _printf("%%%c", *i);

        } else

            count += _putchar(*i);

    }

    _putchar(-1);

    va_end(arguments);

    return (count);

}

