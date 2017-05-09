/*
Problem 2

A sequence of n > 0 integers is called a Mux if the absolute values of the difference between

successive elements take on all the values 1 through n − 1. For instance,

1 4 2 3

is a jolly jumper, because the absolutes differences are 3, 2, and 1 respectively. The definition implies

that any sequence of a single integer is a Mux. You are to write a program to determine whether

or not each of a number of sequences is a Mux.

Input

Each line of input contains an integer n ≤ 3000 followed by n integers representing the sequence.

Output

For each line of input, generate a line of output saying ‘Mux’ or ‘Mux’.

Sample Input

4 1 4 2 3

5 1 4 2 -1 6

Sample Output

Mux

Not Mux
*/
#include<stdio.h>
#include<math.h>
int main(){

    int array[1000],arr[1000],n,i,ck,j;
    while(~scanf("%d",&n)){
        for( i = 0; i < n; i++)scanf("%d",&array[i]);
        int k = 1;
        for(i = 1; i < n;i++)arr[k++] = abs(array[i]-array[i-1]);
       // for(i = 1; i < n;i++)printf("%d ",arr[i]);

        for(i=1;i<k;i++){
        ck=0;
        for(j=k-1; j>=i; --j){
          if(arr[j-1]>arr[j]){     ///replace > with < for descending order
            arr[j-1]=arr[j-1]^arr[j];
            arr[j]=arr[j-1]^arr[j];
            arr[j-1]=arr[j-1]^arr[j]; ///swapped using XOR
              ck=1;
          }
        }
        if(ck==0)break;
        }
           //for(i = 1; i < n;i++)printf("%d ",arr[i]);

        ck = 1;
        for( i = 1; i < k; i++){
            if(arr[i] != i){
                ck = 0;
                break;
            }
        }
        if(ck)printf("jolly\n");
        else printf("Not jolly\n");
    }
    return 0;
}
