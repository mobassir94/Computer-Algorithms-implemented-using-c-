///designing 6 tiles vacuum cleaner agent in c/c++
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    again:
    int n,ck = 1;
    printf("How many dirty tiles? : ");
    scanf("%d",&n);
    if(n>6 || n<1) {
        printf("Input can't be > 6 or <1 as we have only 6 tiles!!!\n");
        goto again;
    }
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("Enter %d dirty tiles position : \n",i+1);
        scanf("%d",&arr[i]);
        if(arr[i] > 6 || arr[i] <1){
            printf("Input can't be > 6 or <1 as we have only 6 tiles!!!\n");
            i--;
        }
    }

    sort(arr, arr+n);



///designing agent
int j = 0,k = 1,dwn;

    for(int i = 1; i<=6; i++){

           if(arr[j]<=3){ //first r0w
            if(arr[j] == i){
                printf("suck (%d) tiles\t",i);
                if(i!=3 && arr[j+1] <= 3)printf("\tMove right from (%d) tiles-->\t",i);
                else  printf("\n\tMove Down from (%d) tiles--v\n",i--);
                j++;
            }else printf("\tMove right from (%d) tiles-->\t",i);
           }else{ ///second r0w
               if(ck){
               if(i==1)dwn = 4;
               else if(i==2)dwn = 5;
               else dwn = 6;
               ck = 0;
               }
               // printf("%d",dwn);

               for(int i=1 ; i<=3; i++){
                if(dwn == arr[j]){
                    printf("suck (%d) tiles\t",dwn);
                    if(dwn==arr[n-1])return 0;
                    j++;
                }else if(dwn > arr[j]){
                    printf("\tMove left from (%d) tiles-->\t",dwn);
                    dwn--;
                }else{
                    printf("\tMove right from (%d) tiles-->\t",dwn);
                    dwn++;
                }
               }
           }
        }
}
