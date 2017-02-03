#include<stdio.h>
///problem:calculate: a^3+a^2b+ab^2+b^3
int main(){
   int a,b,c;
   scanf("%d %d",&a,&b);
   c=(pow(a,3)+(pow(a,2)*b)+a*(pow(b,2))+pow(b,3));
   printf("%d",c);
return 0;
}
