#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - function that produces output according to format
 * *format : number of arguments
 * ... : number of arguments
 */
int _print(const char *format, ...)
{
	va_list ap;

	int i = 0;
	va_start(ap,format);
		if (format == NULL)
		{
			return 1;
		}
		else{
			while(format[i])
					putchar(format[i]);
					i++;
			}
	switch(*format)
	{
	case 'c':
		goto c;

		break;
	case 's':

		goto s;
		
		char *s = malloc(sizeof(char));
		char s = va_arg(ap,int);
		break;
	case '%':
		putchar("%", va_arg, char);
		break;	
	

	}


         char c = va_arg(ap,int);
                        putchar('c');

	va_end(ap);
	return (0);

}
