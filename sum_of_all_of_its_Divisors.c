#include<stdio.h>
#include<stdbool.h>

/*
 problem : Given (n) a positive Integer,Determine whether n is the sum of all of its divisors
 */

 int main()
 {
      int n,sum=0,i=1;
      bool is_not_equal=true;
      printf("Enter Any Number below:\n");
      scanf("%d",&n);
      while(i<n)
      {
          if(n%i==0)sum+=i;
          if(sum==n){
            printf("%d is the sum of all of its Divisors.\n",n);
              is_not_equal=false;
              break;
          }
         ++i;

      }
      if(is_not_equal)printf("%d isn't the sum of all of its Divisors.\n",n);

     return 0;
 }
