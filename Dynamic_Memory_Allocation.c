/*
  implementation of a simple increaseable and decreaseable dynamic array using dynamic memory allocation in c
  (use of malloc(),calloc(),realloc() and free() functions)
*/

#include<stdio.h>
#include<stdlib.h>

int reallocSIZE(int *ptr,int n);


void main()
{

   int n,*ptr,k,x,i=0;
   char ch;
   printf("How many Numbers? :\n");
   scanf("%d",&n);
     //ptr=(int *)calloc(n,sizeof(int));
     ptr=(int *)malloc(n*sizeof(int));
   printf("Enter %d Numbers Below:\n",n);
   while(i<n){
       scanf("%d",&x);
       *(ptr+i)=x;
       i++;
   }
      printf("\nwant to increase  or decrease the array size?(Press I/i or D/d):\n");
      scanf(" %c",&ch);
       printf("Input Your Desired Increase or Decrease Size:\n");
       scanf("%d",&k);
       if(ch=='i' || ch=='I')n+=k;
       else if(ch=='d' || ch=='D')n-=k;
       reallocSIZE(ptr,n);
     free(ptr);
    return ;
}



///decreasing or increasing the size of the array////

int reallocSIZE(int *ptr,int n){
    ptr=(int *)realloc(ptr,n*sizeof(int));

   printf("Present Data:\n");
  int i=0;
   while(i<n){
      printf("%d\t",ptr[i]);
      i++;
   }

  return ;
}
