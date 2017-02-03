/// problem : find a 1d peak (using loop)
#include<stdio.h>
int main()
{
 int arr[10000],i,n;
 printf("How many numbers? :\n");
 scanf("%d",&n);
 printf("Enter %d numbers Below: \n",n);
 for(i=0; i <n; i++)scanf("%d",&arr[i]);
      for(i=0; i<n; i++){

         if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])printf("Position %d is a 1d peak,which is %d\n",i+1,arr[i]);
      }

    return 0;
}
///This Algorithm has THETA(n) complexity
