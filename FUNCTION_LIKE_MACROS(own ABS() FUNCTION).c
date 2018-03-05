/*
 Write a program that uses a parameterized macro to compute the absolute value of an integer and demonstrate its
 use in a program.
*/
#include <stdio.h>
#define ABS(i) (i) < 0 ? -(i) : i
int main()
{
   int a=5;
   printf("%d\n%d",ABS(a),ABS(-a));
    return 0;
}
