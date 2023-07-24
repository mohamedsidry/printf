#include "main.h"



/**
* _printchar - print char.
*
* @c_arg: args passed to printf function .
*
* Return: number of printed chars.
*/



int _printchar(va_list c_arg)
{
char c = va_arg(c_arg, int);
return (_putchar(c));
}




/**
* _printstr - prints string of chars .
*
* @s_arg: args passed to printf function .
*
* Return: number of chars printed .
*/


int _printstr(va_list s_arg)
{
int i = 0;
char *str = va_arg(s_arg, char *);

if (str == NULL)
str = "(null)";

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return (i);
}
/**
* _printpers - prints % only.
* @arg: args passed to printf function (unused).
* Return: number of printed chars .
*/

int _printpers(va_list arg __attribute__((unused)))
{
return (_putchar('%'));
}
