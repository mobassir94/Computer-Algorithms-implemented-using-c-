///write a program to print pascal triangle in c
#include<stdio.h>

int binomial(int pascal){
    if(pascal==0 || pascal==1)return 1;
    else return pascal*binomial(pascal-1);
}
int main()
{
    int n,i,j,k,l,m,nn,o;
    printf("Enter the row of the pascal triangle: ");
    scanf("%d",&n);
    printf("\n\n");
    for(i=0; i<n; i++){
        j=n-i-1;
        while(j!=0){
                printf(" ");
               j--;
        }

        for(j=0; j<=i; j++)
        {

            k=binomial(i)/(binomial(j)*binomial(i-j));
            printf("%d ",k);
            //printf("%d ",binomial(i)/(binomial(j)*binomial(i-j)));
        }
        printf("\n");
    }

    return 0;
}
