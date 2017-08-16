#include<stdio.h>
/*
 write a program that uses a union to convert an int into a long Demonstrate that it works.
*/
union int_to_long{
    int a;
    long b;
};
int main(){
union int_to_long var;
var.b=0L; /// clearing l
var.a=101;
printf("%d %d ",sizeof(var),var.a);
return 0;
}
