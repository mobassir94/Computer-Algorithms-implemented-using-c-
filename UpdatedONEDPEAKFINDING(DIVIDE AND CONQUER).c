///problem : find a 1d peak using recursion
 #include<stdio.h>
void  divcon(int arr[],int n,int l){
    int i=0;
     if(arr[l]<arr[l-1]){
      if(arr[l]>arr[l-1] && arr[l]>arr[l+1])printf("Position %d is a 1d peak which is %d\n",l+1,arr[l]);
      return divcon(arr[l],n,l--);
     }

 }
 int main()
 {
   int arr[10000],i,n,l;
 printf("How many numbers? :\n");
 scanf("%d",&n);
 l=n/2;
 printf("Enter %d numbers Below: \n",n);
  for(i=0; i <n; i++)scanf("%d",&arr[i]);
 divcon(arr,n,l);


     return 0;
 }
