///problem : include c stdio header file  indirectly (use of preprocessor directives in c)
#define STDIO <stdio.h>
#include STDIO
int main(){
int n,i=1,j,q;
int a[100];
scanf("%d",&n);
q=n;
while(n != 0){
    a[i]=n%2;
    n=n/2;
    i++;
}
for(j=i-1; j>0; j--)printf("%d",a[j]);
return 0;
}
