#include "main.h"

/**
* _printstr - prints array of chars .
*
* @str: string to be printed .
*
* Return: number of printed chars .
*/


int _printstr(char *str)
{
int i = 0;

if (str == NULL)
str = "(null)";

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

return (i);

}
