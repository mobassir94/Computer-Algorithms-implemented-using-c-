#include<stdio.h>
///example of scanset in c
int main(){
  int n,i;
  char str[100];
   printf("only input floating point numbers: \n");
   scanf("%[0.0-9.0]",str);
   printf(str);

return 0;
}
