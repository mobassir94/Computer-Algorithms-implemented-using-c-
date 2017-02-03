#include<stdio.h>
///MYsolutionToUVA100THE3n+1PROBLEM
long long counter(long long first)
{
    long long count=1;
     while(first>1)
          {

            if(first&1)
                    first=3*first+1;
              else
              first/=2;

                count++;
          }
          return count;
}
void hcycle(long long first,long long second)
 {
     long long comp=0,count,res,temp;

     while(first<=second)
     {
         count=counter(first);
        if(count>comp)comp=count;
          first++;
     }
     first-=1;
     printf("%lld\n",comp);
 }
int main()
{
   long long first,second,temp;
  while(~scanf("%lld %lld",&first,&second)){
   printf("%lld %lld ",first,second);
 if(first>second){
        temp=first;
        first=second;
        second=temp;
      }

    hcycle(first,second);
  }
    return 0;
}
