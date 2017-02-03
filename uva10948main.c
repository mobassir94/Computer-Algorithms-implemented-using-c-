///solution to UVA10948(but still time limit exceed)
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
long long arr[1000000];
//long long N=1000000;
int main(){
long long n;
int route,i,j=0,k,a,b,ck=0,br=0;

/// Generating sieves array
  arr[j++]=2;
  //route=sqrt(1000000);
for(i=3; i<=1000; i+=2){

        for(k= i*i; k<=1000000; k+=i+i)arr[k]=1;
        }

 for(i=3; i<=1000000; i+=2)if(arr[i]!=1)arr[j++]=i;

/// finding sum of any prime pair is equal to given input or not

 while(scanf("%lld",&n) != EOF){
    if(n==0)return 0;
 if(n>3)
for(i=0; i<=n; i++){
        br=0;
        a=arr[i];
    for(k=0; k<=n; k++){
                        b=arr[k];
                     if(a+b==n){
                        ck=1;
                            if(b>a){
                        printf("%lld:\n",n);
                        printf("%d+%d\n",a,b);
                        br=1;
                        break;
                            }
                        if(a>b){
                    printf("%lld:\n",n);
                    printf("%d+%d\n",b,a);
                    br=1;
                    break;
                        }


                                if(a == b){
                                printf("%lld:\n",n);
                            printf("%d+%d\n",b,a);
                            br=1;
                            break;
                                }
                }

                    }
    if(br==1)break;
}


 if(br==0)printf("%d:\nNO WAY!\n",n);
 }
return 0;
}

