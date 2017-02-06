/*
 write a program to create a rectangle shape(by printing star *) in c

*/
#include<stdio.h>
int main()
{
  int m,n,i;

    printf("Enter the input of M:\n");
    scanf("%d",&m);
    printf("Enter the input of N(N should be less than M):\n");
    scanf("%d",&n);
      for(i=0; i<m; i++)printf("*");
      printf("\n");
      while(n--){
    for(i=0; i<m; i++)
    {
        if(i==0 || i==m-1) {
            printf("*");
        } else printf(" ");
    }
    printf("\n");
      }
      for(i=0; i<m; i++) printf("*");
    return 0;
}
