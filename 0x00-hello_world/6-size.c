#include <stdio.h>

/**
* main - Entry point
*
*Descrption: print size of a
*
*Return: 0 always (sucess)
*/
int main(void); 
{char c;
int a;
long int b;
long long int c;
float f;
printf("size of a:%lu byte(s)\n", (unsignedlong) sizeof(c));
printf("size of a:%lu byte(s)\n", (unsignedlong) sizeof(a));
printf("size of a:%lu byte(s)\n", (unsignedlong) sizeof(b));
printf("size of a:%lu byte(s)\n", (unsignedlong) sizeof(f));
return (0);
}
