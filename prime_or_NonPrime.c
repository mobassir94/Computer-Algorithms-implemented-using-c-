///problem : check if a given number is prime or not
#include<stdio.h>
#include<math.h>
int main()
{
     int n,i,check,boolean=1;

     printf("Enter Any number Below To Check If it is a prime Number or Not:\n");
     while(~scanf("%d",&n)){
                 if(n<=1){
        printf("\n%d isn't a prime number.\n",n);
        boolean=1;
        continue;
     }

     check=sqrt(n);
     for(i=3; i<n; i+=2){

             if(n%2==0){
                boolean=0;
                break;
            }
        if((n%i)==0)boolean=0;
     }
     if(boolean)printf("\n%d is a prime number.\n",n);
     else printf("\n%d isn't a prime Number.\n",n);
     boolean=1;
     printf("\nEnter Any number Below To Check If it is a prime Number or Not:\n");
     }
    return 0;
}
