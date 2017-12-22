///C program to find bankers safe sequence

#include<stdio.h>
#include<stdbool.h>
#define false 0
#define true 1
int main(){
    printf("How many Processes? : ");
    int m,n,i,j,k,l;
    scanf("%d",&m);
    printf("Input Number of Resource Types : ");
    scanf("%d",&n);
    int Allocation[m][n],need[m][n],max[m][n],finish[m],workVector[n],safe[100],count=0;
    ///Filling Allocation matrix
    for(i=0; i<m; i++)
    for(j=0; j<n; j++){
        printf("Enter data at allocation matrix's [%d][%d] position : ",i,j);
        scanf("%d",&Allocation[i][j]);
    }
     ///Filling Max matrix
    for(i=0; i<m; i++)
    for(j=0; j<n; j++){
        printf("Enter data at max matrix's [%d][%d] position : ",i,j);
        scanf("%d",&max[i][j]);
    }
    ///calculating Need matrix
    printf("Need Matrix : \n");
    for(i=0; i<m; i++){
            finish[i]=false;
    for(j=0; j<n; j++)
          printf("%d ", need[i][j]=max[i][j]-Allocation[i][j]);
    printf("\n");
    }
    printf("\nInput Available Matrix's Value Below : \n");
    for(i=0;i<n;i++)
        scanf("%d",&workVector[i]);


   ///safe sequence finding

    printf("\nSafe Sequence : \n");
   while(count!=m){
        bool check=false;
    for(j=0; j<m; j++){
    if(finish[j]==false){
            for(l=0;l<n; l++){
         check = need[j][l]<= workVector[l]?true:false;
    if(check==false)break;
   }
   }if(check){
    for (k = 0 ; k < n ; k++)workVector[k] += Allocation[j][k];
    safe[count++]=j;
    finish[j]=true;
    check=false;
    printf(" --> p[%d]",j);
    }
    }
}
return 0;
}
