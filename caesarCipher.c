#include<stdio.h>
#include<string.h>
#include<stdlib.h>
///encryption function
void encryption(char *str,int key){
  int i;
  int length = strlen(str);
  for(i=0; i<length; i++)str[i]+=key;
    puts(str);

}

///function for Decryption
void decryption(char *str,int key){
 int i;
 int length = strlen(str);
   for(i=0; i<length; i++)str[i]-=key;
    puts(str);

}


///main function
int main(){
 char str[1000],ck;
 int key,i=0;
 printf("please Enter Your Message : ");
 gets(str);
 printf("please Enter Your key : ");
  scanf(" %d",&key);
  recheck:
  printf("choose : \n1.Encryption\n2.Decryption\n");
  scanf(" %c",&ck);
  if(ck=='1')encryption(str,key);
  else if(ck=='2')decryption(str,key);
  else{
    printf("wrong Input!!");
    goto recheck;
  }


 return 0;
}
