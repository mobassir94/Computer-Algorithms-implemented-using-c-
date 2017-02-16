/*
   In the following problem an integer N is given as input.you have to find out the sum of the following expression.
   n^2-(n-1)^2+(n-2)^2-(n-3)^2+(n-4)^2-..........+-1

*/
#include<math.h>
#include<stdio.h>
int main()
{
     int n,i,sum=0,sequence,j=0,power,k;
     scanf("%d",&n);
     i=n;
    // power=pow(n,2);
    power= n*n;
     sum=power;
     while(i>=1){
            ++j;
            k=n-j;
        //sequence = pow(n-j,2);
        sequence = k*k;
     if(j%2 != 0)sequence=-sequence;

      sum+=sequence;
       i--;
     }
     printf("The sum is:%d\n",sum);


    return 0;
}
