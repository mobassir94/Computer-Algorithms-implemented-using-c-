///Write a program to find prime numbers using fermats little theorem(randomized algorithm)

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
     int m,q,n,i,y,a,z;
     printf("input a number to check if it is a prime number:\n");

         while(~scanf("%d",&n)){
                if(n==1 || n==0){
                    printf("Not prime\n");
                    continue;
                }
        q=n-1;
        m=q,y=1;
        a=rand()%q+1; ///choosing a random number between 1 to n-1
       // printf("%d \n",a);
        z=a;
        while(m>0){
            while(m%2==0)z=(z*z)%n,m/=2;
            m--;
           y=(y*z)%n;
        }
        if(y!=1)printf("not prime\n");
          else printf("prime\n");
          printf("input a number to check if it is a prime number:\n");
         }

    return 0;
}
