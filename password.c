/*
  write a program to check if a password contains exactly 7 letters and have at least (a capital letter,a small letter
  a symbol and a digit) if that password fullfills all those criterial then return true else return false
*/
#include<stdio.h>

#include<conio.h>

int main()

{

int u=0,l=0,s=0,d=0;

char n,j;

for(j=0; j<7;j++){

	n=getche();

if(n>=65 && n<=92)u=1;

else if(n >=97 && n <=122)l=1;

else if(n>=48 && n<=56)d=1;

else if(n=='&' || n=='$' || n=='+' || n=='-')s=1;

 }

if(s && d && l && u)printf("\nstatus= password valid\n");

else

printf("\nstatus= password invalid\n");

return 0;

}
