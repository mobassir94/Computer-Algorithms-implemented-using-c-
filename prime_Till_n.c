/*
  problem : write a program to print prime numbers till n(user input) using sieves 6th algorithm(most famous and
         highly efficient algorithm
*/
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long long arr[1000000];
//long long N=1000000;
int main(){
long long n;
int route,i,j=0,k;

/// Generating sieves array
  arr[j++]=2;
    //route=sqrt(1000000);
for(i=3; i<=1000; i+=2){

        for(k= i*i; k<=1000000; k+=i+i)arr[k]=1;
        }

 for(i=3; i<=1000000; i+=2)if(arr[i]!=1)arr[j++]=i;
 printf("you want to see prime numbers till which number?:\n");
 while((scanf("%lld",&n) != EOF)){
 printf("\nPrime Numbers Till %lld are:\n",n);
 i=0;
  while(arr[i]<= n){
        printf("%ld\n",arr[i]);
  ++i;
  }
   printf("\nyou want to see prime numbers till which number?:\n");
 }
}
