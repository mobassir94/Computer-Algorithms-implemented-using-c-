//write a program to find prime numbers within range (m to n)
#include<stdio.h>
#include<math.h>
int main()
{
long long m,n,arr[100000];
scanf("%lld%lld",&m,&n);
if(m>n){
m=m^n;
n=m^n;
m=m^n;
}
if(m==1)m=3;
long long i, j=0;
long long mm=m;
if(m==2)printf("2 is prime\n");
for(i=3;i<=n;i+=2)
for(j=i*i;j<=n;j+=i+i)arr[j]=1;
if(mm%2==0)mm++;
while(mm<=n){
if(arr[mm]!=1)
printf("%lld is prime\n",mm);
mm+=2;
}
return 0;
}
