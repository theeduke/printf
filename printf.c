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
	char char_temp;
	char *string_temp;
	char ch;
	int i = 0;
	
	va_start(ap,format);

	   while(ch = *format ++)
	   {
		   if ('%' == ch)
		   {
			   switch (ch = *format ++)
			   {
				   case '%':
					   putchar('%', char);
					   i++;
					   break;
				   case 'c':
					   char_temp = va_arg(ap, int);
					   putchar( char_temp);
					   i++;
					   break;
				   case 's':
					   string_temp = va_arg(ap, );
					   char * s = va_arg(ap,int);
					   break;
			   }
		   }
	   }
	va_end(ap);
	return (0);

}
