///count the number of occured elements from unsorted array(counting sort using bubble sort)

#include<stdio.h>
int arr[5299999];
int main()
{
   int store[100],i,j,max=0,min,n;
   printf("Enter maximum size of the array : ");
   scanf("%d",&n);
   printf("Enter %d numbers : ",n);
   for(i=0; i<n; i++)scanf("%d",&arr[i]);

   for(i=0; i<n; i++)
     for(j=i+1; j<n; j++){

        if(arr[i]>arr[j]){
         int temp = arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
        }
     }


   int count = 1;
   //for(i=0 ; i<n ; i++)printf("%d \n",arr[i]);
   for(i=0 ;i<n; i++)
    if(arr[i]==arr[i+1]){
            ++count;
           continue;
    }
   // printf("%d ",count);
    else {
       printf("%d ",count);
        count=1;
    }


    return 0;
}

