
#include<stdio.h>
int main(){
int k=0,I,j,n,n1;
printf("Input Row size : ");
scanf("%d",&n);
printf("Input column size : ");
scanf("%d",&n1);
for(I=1;I<=n;I++)
{
I<=3?k++:k--;
for(j=1;j<=n1;j++)
{
if (j>=4-k && j<=2+k)printf("*");

else
{
printf(" ");
}
}
printf("\n");
}
return 0;
}
