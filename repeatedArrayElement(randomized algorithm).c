///write a program using randomized algorithm to check if a array contains repeated elements
#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[10000],i,n,j,count=0;
     printf("How many Numbers?:\n");
     scanf("%d",&n);
     printf("Enter %d numbers in the array:\n",n);
     for(i=1; i<=n; i++)scanf("%d",&arr[i]);
     while(1){
         ++count;
        i=rand()%n+1;
        j=rand()%n+1;
        if(i!=j && arr[i]==arr[j]){
                printf("\n\nFound\n");
        break;
        }
        else
                printf("(not found)Searching....\n");
                if(count==1000000){
                        printf("\n\tSORRY!Tried hard but not found\n");
                        exit(1);
                }

     }
     printf("\nFound after %d Attempts\n",count);

    return 0;
}
