/*
in the following problem, an integer given as input.in the output,the number of lines is equal to this number.
in every odd numbered line(e.g 1st,3rd,5th and so on).you have to print the odd numbers from 1 to that line
number.on the other hand in the even numbered lines,print all the even numbers from 2 to that line number.

sample input           sample output
6                           1
                            2
                           1 3
                           2 4
                           1 3 5
                           2 4 6

 */


#include<stdio.h>
int main(){
   int i,j,n,odd,even,count=0,oddcount=0;
   printf("Enter the Number of ROW below:");
   scanf("%d",&n);
   for(i=1; i<=n; i++){
       odd=1,even=2;
          if(i%2==0){
            ++count;
            j=count;
          }
          else {
            ++oddcount;
            j=oddcount;
          }
        while(j--){
            if(i%2==0){
        printf("%d ",even);
        even+=2;
     }else{
         printf("%d ",odd);
        odd+=2;
     }
        }
       printf("\n");
   }

return 0;
}
