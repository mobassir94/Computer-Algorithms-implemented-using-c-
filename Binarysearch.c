#include<stdio.h>

int main()
{

   int arr[1000],mid,start,end,i,j,n,range;
   printf("Range of numbers/How many numbers?:\n");
   scanf("%d",&range);
   printf("Enter %d Numbers Below:\n",range);
   for(i=0; i<range; i++)scanf("%d",&arr[i]);
   printf("Enter the Number to be searched\n") ;

   scanf("%d",&n);
   start=0;
   end=i-1;

   mid=(start+end)/2;

   if(n==arr[end]){
      printf("%d occurs at %d position in the array.\n",n,end+1);
      return 0;
    }
   for(; ;){
     if(arr[mid]==n){
            printf("The Number %d occurs at %d position",n,mid+1);
           break;
     }
     else if(n>arr[mid]){
        start=mid+1;
        mid=(start+end)/2;
        if(arr[mid]==n){
            printf("the Number %d occurs at %d position\n",n,mid+1);
            break;
        }
     }

     else if(n<arr[mid])
     {
         end=mid-1;
         mid=(start+end)/2;
        if(arr[mid]==n){
            printf("the Number %d occurs at %d position\n",n,mid+1);
            break;
        }
     }
     if(end=start)
     {
         printf("%d doesn't exist\n",n);
         break;
     }
   }


    return 0;
}
