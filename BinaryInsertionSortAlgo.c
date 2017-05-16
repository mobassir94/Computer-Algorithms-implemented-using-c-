///Implementing Binary Insertion sort in c (complexity : O(logi)

#include<stdio.h>
int BinarySearch(int array[],int index,int low,int high);
void BinaryInsertion(int arr[],int size);
int main()
{
    int i,n;
    printf("How many Numbers? : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d Numbers Below : \n",n);
    for(i=0; i<n; i++)scanf("%d",&array[i]);
    BinaryInsertion(array,i);
    printf("\n\n\tSorted Array : ");
    for(i=0; i<n; i++)printf("%d ",array[i]);
    return 0;
}
///Functions that Implements BinaryInsertionSort
void BinaryInsertion(int arr[],int size)
{
   int index,temp,i,j;
   ///insertion sort
   for(i=1; i<size; i++){
     index=arr[i];
     j = i-1;
     temp = BinarySearch(arr,index,0,j); ///getting insertable index
     while(j>=temp){
        arr[j+1]=arr[j];
        --j;
     }
     arr[j+1]=index;
   }
}



///Function to get the Insertable index using binary search

int BinarySearch(int array[],int index,int low,int high)
{
    int mid = low+high/2;
    if(high<=low)return (array[low]>index ? low : low+1);
    else if(array[mid] == index)return mid+1;
    else if(array[mid]>index)
        return BinarySearch(array,index,low,mid-1);
        return BinarySearch(array,index,mid+1,high);
}
