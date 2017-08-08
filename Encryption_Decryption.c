#include<stdio.h>
/*
  trace :

if num = 10 then c[2] == (c1, c0) == (0, 10) == (0x00, 0x0A); then swap c1 with c0.
    Result == (c0,c1) == (10, 0) == (0x0A, 0x00). num == 0x0A00 == 2560.

    https://www.onlinegdb.com/rJVx4u7wZ
*/
int encode(int n);
int main()
{
  printf("Encryption  : \n");
  int i=encode(10);
   printf("\nDEcryption : \n");
  encode(i);
return 0;
}


int encode(int n){

union cryptography{
  int num;
  unsigned char c[2];

}crypt;

 crypt.num=n;
  printf("%x ",crypt.c[0]);
    printf("%x ",crypt.c[1]);
  unsigned char ch = crypt.c[0];
  crypt.c[0]=crypt.c[1];
  crypt.c[1]=ch;
    printf("%x ",crypt.c[0]);
    printf("%x ",crypt.c[1]);
    printf("%02x \n",crypt.num);
return crypt.num;
}
