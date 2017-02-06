///SELECTION sort algorithm to sort an unordered array to ascending/descending order
#include<stdio.h>
int main()
{
    int arr[100000],i,j,n;
    printf("How many numbers?:\n");
    scanf("%d",&n);
    printf("Enter %d elements Below:\n",n);
    for(i=0; i<n; i++)scanf("%d",&arr[i]);
    ///sorting the array
    for(i=0;i<n;i++){
        for(j=0; j<n; j++){
          if(arr[i]>arr[j]){     ///replace > with < for Ascending order
            arr[i]=arr[i]^arr[j];
            arr[j]=arr[i]^arr[j];
            arr[i]=arr[i]^arr[j]; ///swapped using XOR
          }
        }
    }
    printf("After Sorting:\n");
    for(j=0; j<i; j++)printf("%d ",arr[j]);

    return 0;
}

