#include <stdio.h>
/**
* main - Entry point
*
*Descrption:print
*
*Return: 0 always(sucess)
*/
int main(void);
{char a;
int b;
long int c;
long long int d;
float f;
printf("size of an:%lu byte(s)\n", (unsignedlong)sizeof(a));
printf("size of an:%lu byte(s)\n", (unsignedlong)sizeof(b));
printf("size of an:%lu byte(s)\n", (unsignedlong)sizeof(c));
printf("size of an:%lu byte(s)\n", (unsignedlong)sizeof(d));
printf("size of an:%lu byte(s)\n", (unsignedlong) sizeof(f));
return (0);
}
