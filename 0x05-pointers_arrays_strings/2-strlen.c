#include "main.h"

/**
 *_strlen - str length
 *
 *@s: string to find length
 *Return: returns lenght;
 */



int _strlen(char *s)

{
int i;

while (s[i] != '0')
{
i++;
}

return (i);
}
