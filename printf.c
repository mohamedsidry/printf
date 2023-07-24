#include "main.h"


/**
* _printf - the main function in printf project .
*
* @format: string and start of args .
*
* Return: number of printed chars .
*
*
*
*/

int _printf(const char *format, ...)
{
int count = 0;
char c;
char *str;
va_list arg;
if (format == NULL)
return (-1);
va_start(arg, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = va_arg(arg, int);
count += _putchar(c);
break;
case 's':
str = va_arg(arg, char *);
count += _printstr(str);
break;
case '%':
count += _putchar(*format);
break;
default:
count += _putchar(*format);
continue;
}
}
else
{
count += _putchar(*format);
}
format++;
}
va_end(arg);
return (count);
}
