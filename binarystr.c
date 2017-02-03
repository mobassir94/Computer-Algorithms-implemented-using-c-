#include<stdio.h>
#include<string.h>

/*
problem : Write a Program to convert any given string to its corresponding ASCII values and binary Numbers
*/
int binaryconverter(char *p);
int binary(int x);


int main(){
char str[100];
int j,n,temp,len;
printf("Enter Any string/sentence below:\n");
gets(str);
    binaryconverter(str);
return 0;
}
int binaryconverter(char *p){
    int i=0;
    while(*p){
        if(*p != ' ')printf("[%c]:%d",*p,*p);
        printf(" ");
      i++;
    *p++;
 }
 printf("\n");
 p=p-i;
 while(*p){
        if(*p != ' ')binary(*p);
     printf(" ");
    *p++;
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
