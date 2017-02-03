/*
  problem : write a program to calculate horners method/horners equation
*/
#include<stdio.h>

int main()
{
   int n,i;
   double coefficients[100],x,sum=0;
   printf("Enter the DEGREE of the Polynomial Below:\n");
   scanf("%d",&n);
   printf("Enter %d coefficients (one by one) Below:\n",n);
   for(i=0; i<=n; i++)scanf("%lf",&coefficients[i]);

    printf("Enter the Value of x/variable Below:\n");
    scanf("%lf",&x);
    for(i=0; i<n; i++)sum=(sum+coefficients[i])*x;
    sum=sum+coefficients[i];
     printf("Evaluated Polynomial Using Horners Rule: %.2lf\n",sum);
    return 0;
}
