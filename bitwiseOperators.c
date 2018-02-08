#include<stdio.h>
int main()
{
    int c='A';
    int i;
    for(i=128; i>0; i=i/2)
    {
        if(i & c)printf("1 ");
        else printf("0 ");
    }
   c= ~c;/// 1's complement
   printf("\nAfter 1'c Complement : \n %d\n",c);
   for(i=128; i>0; i=i/2)
    {
        if(i & c)printf("1 ");
        else printf("0 ");
    }

     printf("\n\nInput any positive or negative number within range 32768(short int)\n");
    short v;
    scanf("%hd",&v);
    if(v & 32768)printf("\nNegative Number \n");
    else printf("positive Number \n");
    return 0;
}
