/*
  problem : write a user defined function to calculate length of a string(don't use predefined string functions)
*/
#include<stdio.h>
int rstrlen(char *ch);
int i=0;
int main(){
  char str[100];
  int len;
  printf("Enter your sentence Below:\n");
  gets(str);
  len = rstrlen(str);
  printf("length of the string is:%d\n",len);

return 0;
}
int rstrlen(char *ch){
  i++;
  if(*ch==13)return i;
 rstrlen(*ch++);
}
