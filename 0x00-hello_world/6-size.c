#include <stdio.h>
/**
* main - Entry point
*
*Descrption:print
*
*Return: 0 always(sucess)
*/
int main(void)
{
	char a;

	int b;

	long int c;

	long long int d;

	float f;
printf("size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
printf("size of along long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of a float: %lu byte(s)", (unsigned long) sizeof(f));
return (0);
}
