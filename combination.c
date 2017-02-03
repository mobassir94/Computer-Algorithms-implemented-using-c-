#include<stdio.h>
/*
problem: Given n boolean variables x1,x2,...,and Xn.we wish to print all possible combinations of truth values
they can assume.for example if n==2,there are four possibilities: true,true; true,false; false,true; and false,false;

(n!+n)
*/

void combination(int arr[],int key,int n)
{
 int i,temp;
 if(key==n)for(i=0; i<n; i++){
        printf("%d  ",arr[i]);
       if(i==n-1)printf("\n");
 }
 else{
    for(i=key; i<n; i++)
    {
        temp=arr[key];
        arr[key]=arr[i];
        arr[i]=temp;

        combination(arr,key+1,n);
        temp=arr[key];
        arr[key]=arr[i];
        arr[i]=temp;
    }
 }


}

int main()
{
     int i,n,arr[10000],j,key=0;
     printf("How many Variables?:\n");
     scanf("%d",&n);
     printf("Enter %d Numbers Below:\n",n);
     for(i=0; i<n; i++)scanf("%d",&arr[i]);
     printf("All possible Combinations are:\n");
        for(i=0;i<n;i++)
        {

            for(j=0; j<n; j++)
            {
             printf("%d  ",arr[i]);
            }
            printf("\n");


        }
  combination(arr,key,n);
    return 0;
}
