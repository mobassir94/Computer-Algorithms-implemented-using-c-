///example of user defined string reverse function
#include<stdio.h>
#include<string.h>
int pal(char *str){
 char *p,i=0;
 char str2[100];
 p=str;
 while(*p){
        i++;
    printf("%c",*p);
    *p++;
 }
 *p='\0';
 p=str+i-1;
 while(*p){
        if(*p==str[0]){
            printf("%c",*p);
            return 0;
        }
    printf("%c",*p);
    *p--;
 }

}
int main(){
 char str[100];
 printf("whats in your mind?:\n");
 scanf("%s",str);
 pal(str);
return 0;
}
