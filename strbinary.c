/*
  problem : write a program to convert any given string to its corresponding ascii values and binary digits
*/
#include<stdio.h>
#include<string.h>
int binaryconverter(char p[]);
int binary(int x);
int main(){
char str[100];
int j,n,temp,len;
printf("Enter Any sentence Below:\n");
gets(str);
    binaryconverter(str);
return 0;
}
int binaryconverter(char p[]){
    int i=0;
    while(p[i] != '\0'){
        if(p[i] != ' ')printf("[%c]:%d",p[i],p[i]);
        printf(" ");
      i++;

 }
 printf("\n");
i=0;
 while(p[i] != '\0'){
        int a=0;
        if(p[i] != ' '){
                a=p[i];
                binary(a);
        }
     printf(" ");
    i++;
 }
}
int binary(int x){
   int j,a[100],i=1;
   while(x != 0){
     a[i]=x%2;
     x=x/2;
     i++;
   }
   for(j=i-1; j>0; j--)printf("%d",a[j]);
}

