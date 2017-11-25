#include<stdio.h>

int main()
{
    int n,burst[100],waiting[100],tat[100],i=0,j=0,sum=0,total=0,k=0,l;
    float atat=0.0,awt=0.0,throughput=0.0;
    printf("Enter the Number of Process below : \n");
    scanf("%d",&n);
    i=n;
    while(n--){
     printf("Burst time for process %d :",j+1);
     scanf("%d",&burst[j]);
     throughput+=burst[j];
     j++;
    }
   for(n=0; n<i; n++){
    printf("\nwaiting time for process %d :",n+1);
    if(n==0)printf("0\n");
    else{
            sum+=burst[n-1];
              tat[k++]=sum;
            total+=sum;
            printf("%d\n",sum);
    }
   }
   sum+=burst[n-1];
    tat[k++]=sum;
   printf("total waiting time : %d ",total);
   printf("\naverage waiting time : ");
   awt=(float)total/i;
   printf("%f",awt);
   printf("\nthroughput : %f\n",i/throughput);
   for(i=0 ;i < k ; i++){
       printf("Turn around time for p %d is %d\n",i+1,tat[i]);
      atat+=tat[i];
      printf("%f\n\n",atat);
   }

       printf("Average Turn Around time = %f ",atat/j);


}
