///BUBBLE sort algorithm to sort an unordered array to ascending/descending order
#include<stdio.h>
int main()
{
    int arr[100000],i,j,n,ck;
    printf("How many numbers?:\n");
    scanf("%d",&n);
    printf("Enter %d elements Below:\n",n);
    for(i=0; i<n; i++)scanf("%d",&arr[i]);
    ///sorting the array
    for(i=1;i<n;i++){
        ck=0;
        for(j=n-1; j>=i; --j){
          if(arr[j-1]<arr[j]){     ///replace < with > for Ascending order
            arr[j-1]=arr[j-1]^arr[j];
            arr[j]=arr[j-1]^arr[j];
            arr[j-1]=arr[j-1]^arr[j]; ///swapped using XOR
              ck=1;
          }
        }
        if(ck==0)break;
    }
    printf("After Sorting:\n");
    for(i=0; i<n; i++)printf("%d ",arr[i]);

    return 0;
}

