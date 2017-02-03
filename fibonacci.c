#include<stdio.h>
///problem : write a program to print fibonacci sequence till n(n is users input)
 long long first=0,second=1,store,n,i;
int main()
{
    printf("Enter the limit below for fibonbacci sequence:\n");
    scanf("%lld",&n);
    if(n==0){
        printf("Invalid input.\n");
        return 0;
    }
    printf("%lld ",first);
    if(n==1)return 0;
    printf("%lld ",second);
    if(n==2)return 0;
    for(i=2; i<n; i++)
    {
        store=first+second;
        first=second;
        second=store;
        printf("%lld ",store);
    }

    return 0;
}
