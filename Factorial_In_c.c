#include<stdio.h>

///problem: write a factorial function using recursion
int factorial(int n){
if(n>1)
    return (n*factorial(n-1));
    else return 1;
}
int main(){
int n,fact;
scanf("%d",&n);
fact = factorial(n);
printf("%d",fact);
return 0;
}
