///write a program to calculate Binomial coefficient

#include<stdio.h>
#include<stdlib.h>

long long binomial(long long  n,long long m)
{
   if(m!=0 && n!= m)return binomial(n-1,m)+binomial(n-1,m-1);
   else return 1;

}
int main()
{
 long long m,n,result;
    printf("Please Enter The Value Of n:\n");
    scanf("%lld",&n);
    printf("Now Enter The value of m:\n");
    scanf("%lld",&m);
    if(n<m){
            printf("Resultant Binomial coefficient: 0\n");
        exit(1);
    }
    result = binomial(n,m);
     printf("Resultant Binomial coefficient: %lld\n",result);
    return 0;
}
