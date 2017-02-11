#include<stdio.h>

long long doubleFactorial(long long n){
  if(n==1 || n==0)return 1;
  else return n*doubleFactorial(n-2);
}
int main()
{
     long long n;
     printf("Scan/Input Any Number(n) Below:\n");
   while(~scanf("%lld",&n))printf("Double Factorial: %lld\n",doubleFactorial(n));

    return 0;
}
