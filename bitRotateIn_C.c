/*
A rotate is similar to a shift except that the bit shifted off one end is inserted onto the others.for example :
0 1 0 0 0 0 0 1 rotated left one place is : 1 0 0 0 0 0 1 0
write a function called rotate() that rotates a byte left one position each time it is called.
*/

#include<stdio.h>
struct bits{
  unsigned int a : 1;
  unsigned int b : 1;
  unsigned int c : 1;
  unsigned int d : 1;
  unsigned int e : 1;
  unsigned int f : 1;
  unsigned int g : 1;
  unsigned int h : 1;
};

union bitRotate{
  char ch;
  struct bits c;

}var;

///rotate function

void rotate(){
  if(var.c.g)printf("1 ");
  else printf("0 ");
  if(var.c.f)printf("1 ");
  else printf("0 ");
  if(var.c.e)printf("1 ");
  else printf("0 ");
  if(var.c.d)printf("1 ");
  else printf("0 ");
  if(var.c.c)printf("1 ");
  else printf("0 ");
  if(var.c.b)printf("1 ");
  else printf("0 ");
    if(var.c.a)printf("1 ");
  else printf("0 ");
   if(var.c.h)printf("1 ");
  else printf("0 ");

}

///function to get the original binary of a character typed by user
void originalBinary()
{

  if(var.c.h)printf("1 ");
  else printf("0 ");
  if(var.c.g)printf("1 ");
  else printf("0 ");
  if(var.c.f)printf("1 ");
  else printf("0 ");
  if(var.c.e)printf("1 ");
  else printf("0 ");
  if(var.c.d)printf("1 ");
  else printf("0 ");
  if(var.c.c)printf("1 ");
  else printf("0 ");
  if(var.c.b)printf("1 ");
  else printf("0 ");
    if(var.c.a)printf("1 ");
  else printf("0 ");
    printf("\n");
}
int main()
{
   printf("Input Any character Below : \n");
   scanf("%c",&var.ch);
   printf("\nEquivalent Binary : \n");
    originalBinary();
    printf("After rotating left most byte : \n");
   rotate();
    return 0;
}
