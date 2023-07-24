#include "main.h"


/**
* _printf - prints formated string .
*
* @format: string .
*
* Return: number of printed chars .
*/


int _printf(const char *format, ...)
{

int printed = 0;
int i = 0;
va_list args;

if (format == NULL || format[i] == '\0')
return (-1);

va_start(args, format);


while (format[i] != '\0')
{
if (format[i] != '%')
{
printed += _putchar(format[i]);
}
else
{
i++;
printed += select_format(args, format[i]);
}
i++;
}

va_end(args);

return (printed);

}
