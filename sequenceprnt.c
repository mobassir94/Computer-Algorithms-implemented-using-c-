/*
  problem : write a program to solve this sequence 0,1,2,12,36,80....
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double i,temp,next;
   printf("Enter Limit of this sequence 0,1,2,12,36,80.....below:\n");
      scanf("%d",&n);
       if(n==0){
           printf("Error in Input.\n");
            return 0;
       }
      printf("Showing the Resultant Sequence till %d Below:\n",n);
      for(i=0.0; i<=n; i++){
        temp=pow(i,2)+pow(i,3);
        printf("%.0lf ",temp);
      }
    return 0;
}
