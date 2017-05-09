/*
We know that (a*b*c)%m =((a%m)*(b%m)*(c%m))%m. That is (6 ^ 3) % 5 = ((6%5)*(6%5)*(6%5))%5
=(1*1*1)%5 = 1 %5 = 1.
*/

#include<stdio.h>
long long Bigmod(long long n,long long power,long long mod);
void main()
{
    long long n,power,mod;
    printf("Enter Number,Power and Mod below:\n");
    scanf("%lld%lld%lld",&n,&power,&mod);
    printf("Result : %lld\n",Bigmod(n,power,mod));

}

///BigMod function

long long Bigmod(long long n,long long power,long long mod){
         if(power==0)return 1;
          if(power %2){
            return ((n%mod) * (Bigmod(n,power-1,mod)))%mod;
         }else{
           long long res = Bigmod(n,power/2,mod);
           return ((res % mod)* (res % mod))%mod;
         }


}
