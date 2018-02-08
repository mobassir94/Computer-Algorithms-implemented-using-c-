///c program to convert a decimal number to its equivalent binary form using right shift operator
#include<stdio.h>
///right Shift operator = (ck=n/2) and left shift = (ck=n*2)
int main()
{
    long long decimal;
    register int i,ck;
    printf("Enter Any positive number ranges within 64 bit : ");
    scanf("%lld",&decimal);
    for(i=63; i>=0; i--)
    {
        ck=decimal >> i;///right Shift operator = (ck=n/2)
        if(ck & 1)printf("1 "); /// same as (if(ck %2 )printf("1 ");
        else printf("0 ");
    }
}
