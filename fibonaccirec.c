#include<stdio.h>

///problem : write a fibonacci function using recursion
 long long first=0,second=1,store,n,i;

 ///Recursive_FUNCTION
 long long recursivefib(long long n){

     if(n==0)return 0;
     if(n==1)return 1;
     else if(n==3)return 1;

    return recursivefib(n-1)+recursivefib(n-2);
printf(" fibonacci is : %lld\n",n);

 }
int main()
{
       printf("Input RANGE:\n");
       scanf("%lld",&n);
      if(n==0)
      {
          printf("Invalid input.\n");
          return 0;
      }
      if(n==1) {
    printf("%lld Number fibonacci is : 0\n",n);
    return 0;
      }
   store = recursivefib(n);
   printf("%lld Number fibonacci is : %lld\n",n,store);

    return 0;
}
