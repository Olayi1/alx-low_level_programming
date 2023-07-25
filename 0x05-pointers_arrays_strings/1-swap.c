#include "main.h"
/**
*swap_int - swap integer
*@a: integer
*@b: integer
*Return: 0;
*/
void swap_int(int *a, int *b)
{
int tmp;
tmp = *a;
*a = *b;
*b = tmp;
}
