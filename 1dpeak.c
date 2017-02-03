 #include<stdio.h>
 /*
  problem: A number or position in a array is said to be a peak if the value of that index is greater than or equal to
     its left index and right index,that means position n is a peak if n>=n-1 and n>=n+1

    our task is to write a program to solve this problem
 */
int  divcon(int arr[],int l){
    int i=0;

     if(arr[l]<arr[l-1]){
    if(l>0)  return divcon(arr,l-1);
     }else if(arr[l]<arr[l+1]) return divcon(arr,l+1)  ;
      if(arr[l]>=arr[l-1] && arr[l]>=arr[l+1])printf("Position %d is a 1d peak which is %d\n",l+1,arr[l]);
 }
 int main()
 {
   int arr[10000],i,n,l;
 printf("How many numbers? :\n");

  scanf("%d",&n);
 l=n/2;
  printf("Enter %d numbers Below: \n",n);
  for(i=0; i <n; i++)scanf("%d",&arr[i]);
 divcon(arr,l);


     return 0;
 }

