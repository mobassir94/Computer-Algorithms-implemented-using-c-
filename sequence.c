#include<stdio.h>
///calculate: 1+1/2+1/4+1/8.....
int main(){
  double sum=1,i=2,j=1;
  int n,k=2;
  printf("replace n with valid sequence: 1/n\nGive n a input:");
  scanf("%d",&n);
  printf("Your last sequence is: 1/%d\n",n);
  while(k<n){
  k=k*2;

  }
  if(k==n){
  while(1){
    sum+=(1/i);
    if(i==n)break;
  i=i*2;
  }
   printf("sum of 1/2+1/4+.........1/%d is: %lf\n",n,sum);
}else
printf("\nyou haven't Entered a valid sequence number for this program:\n");
return 0;
}

