#include "main.h"
/**
*_strlen - function for one arguement
*@s: string
*Return: 0;
*/

int _strlen(char *s)
{
int i;
i = 0;
while (*(s + i) != '\0')
{
i++;
}
return (i);
}
