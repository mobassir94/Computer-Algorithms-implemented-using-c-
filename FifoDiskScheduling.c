#include<stdio.h>
#include<math.h>
int main()
{
    int n,head;
    printf("Enter The size of the Queue : ");
    scanf("%d",&n);
    int arr[n],i,total=0;
     printf("Insert Queue Elements Below : \n");
    for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
    if(arr[i]<0){
        printf("can't take negative value\nTry again");
        i--;
        continue;
    }
    }
    printf("Head start at : ");
    scanf("%d",&head);
    total+=abs(head-arr[0]);
    for(i=1; i<n; i++)total+=abs(arr[i]-arr[i-1]);
    printf("Total Head movement is : %d\n",total);
    return 0;
}
