#include<stdio.h>
///solve this sequence: 1 2 10 30....
int main(){
   int i=1,n;
   printf("Length of the Sequence is:");
   scanf("%d",&n);
   printf("1 ");
   while(i <= n-1){
    printf("%d ",(i*i*i)+i);
    i++;
   }
return 0;
}
