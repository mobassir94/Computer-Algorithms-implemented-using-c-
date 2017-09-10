#include<stdio.h>
struct stct_type{
  int a;
  char b;
  float bal;
}myvar,*p;
 void main()
 {
     p=&myvar;
     p->a=10; ///here 'p.a' doesn't work,so for structures pointer type variable we use -> to access member
     printf("%d ",p->a); ///p.a doesn't work and here p-> is accessing a member from structure


 }
