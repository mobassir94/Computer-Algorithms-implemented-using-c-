///this program counts which number occurs how many times in array
#include<stdio.h>
long long arr[1000000]={0},max=-999999;
int main()
{

    long long n,i,j;
    printf("Enter How many Numbers? : ");
    scanf("%lld",&n);
    printf("Enter %ll numbers below : ",n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&j);
        if(j>max)max=j;
        arr[j]++;
    }
     for(i=0 ;i<max; i++)
         if(arr[i] != 0)printf("%lld",arr[i]);


    return 0;
}
