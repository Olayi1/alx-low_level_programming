#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: (0)
*/

int main(void)
{
int i;

i = 98;
positive_or_negative(i);
if (i > 0)
printf("i is positive\n");
else if (i < 0)
{
printf("i is negative\n");
}
else
{
printf("i is zero\n");
}
return (0);
}
