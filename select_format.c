#include "main.h"


/**
* select_format - select the right format .
*
* @args: args of varadic function printf .
* @format: char represent type of arg .
*
* Return: number of printed chars .
*/


int select_format(va_list args, char format)
{

int i = 0;
int printed = 0;
mystruct charandfun[] = {
			 {'c', _printchar},
			 {'s', _printstr},
			 {'%', _printpers},
			 {'\0', NULL}
};

while (charandfun[i].sign != '\0')
{
if (charandfun[i].sign == format)
{
printed += charandfun[i].fun(args);
break;
}
i++;
}
return (printed);
}
