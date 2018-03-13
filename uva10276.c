/*
solution reference: http://codeforces.com/blog/entry/57167
*/
#include<stdio.h>

long long t,n,res;

int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",(((n+1)*(n+1))/2) -1 );
    }

    return 0;
}
