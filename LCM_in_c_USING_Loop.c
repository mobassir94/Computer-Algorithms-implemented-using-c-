/*
problem : lcm using loop in c
*/
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int lcm,first,second,check=true;
    printf("ENTER TWO POSITIVE INTEGER BELOW:\n");
    scanf("%d",&first);
    scanf("%d",&second);
    lcm=first>second?first : second;
    while(check)
    {
        if(lcm%first==0 || lcm%second==0){
            printf("LCM: %d",lcm);
            check=false;
        }
        lcm++;
    }



    return 0;
}
