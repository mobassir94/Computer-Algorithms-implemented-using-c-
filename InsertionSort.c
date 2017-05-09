/// C program to implement InsertionSort Algo (source: geeksforgeeks)
#include<stdio.h>
void Insertion(int arr[],int length);
int main()
{
 int n,i;
 printf("How many Numbers? : \n");
 scanf("%d",&n);
 int arr[n];
 printf("INPUT Unsorted Array : ");
 for(i=0;i<n;i++)scanf("%d",&arr[i]);
 Insertion(arr,i);
 printf("\n\n\n\tOUTPUT In sorted order :  ");
 for(i=0;i<n;i++)printf("%d ",arr[i]);
    return 0;
}


///function to implement insertion sort Algo

void Insertion(int arr[],int length){
       int i,j,temp;
       for(i=1; i<length; i++){
        temp=arr[i];
        j=i-1;
            while(j>=0 && arr[j] > temp)///replace >temp with <temp to get Descending order
            {
                arr[j+1] = arr[j];
                j=j-1;
            }
          arr[j+1]=temp;
       }
}
