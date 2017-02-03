/*
  problem: write a program using pointer that will check palindrome string
*/
#include<stdio.h>
int mystrrev(char *p){
    int i=0,j=0,check=0;
    while(*p){   ///counting string length of my given string here
        i++;
        *p++;
    }
    char *q,*r;
    r=p-i; ///pointing the first character
    q=r+(i-1);    ///pointing the last character of the string
    while(*q){    ///traversing from last character to 1st character
        if(*q != *r)check=1;
         j++;    ///reverse string length computing goes here
        if(j==i)break;    ///if reverse string length==given string length then break out from the loop
        *q--;
        *r++;
    }
    if(check==1)printf("no");
    else
        printf("yes");
}
int main()
{
 char str[100];
 gets(str);
 mystrrev(str);
return 0;
}
