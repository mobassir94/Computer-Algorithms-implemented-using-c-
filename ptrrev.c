/*
  problem: write a program to input numbers in a array and print them(solve the problem using  c pointers
*/
#include<stdio.h>
int main(){
 int p[10],*q,a,n,ptr;
 printf("How many Numbers?:\n");
 scanf("%d",&a);
int i;
q=&p[0];
printf("Input %d Numbers:\n",a);
for(i=0; i<a; i++){
    scanf("%d",q);
    p[i]=*q;
  *q++;
 }
i = a-1;
printf("printing your given numbers below:\n");
while(i>=0){
    printf("%d ",p[i]);
    i--;
}

return 0;
}
