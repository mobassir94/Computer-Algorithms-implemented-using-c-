#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*
  simple dice game:
 problem : write a program which will take random input from user (from 1 to 6 integers)
  if any of users input matches with computers random memory then report true else report false
*/
int main()
{
int i;
int diceRoll;
int a;

for(i=0; i<20; i++){

printf("Enter the number you guess: ");
scanf("%d", &a);

diceRoll = (rand()%6) + 1;

if(a==diceRoll){
printf("Good job .. the number is %d \n", diceRoll);
}else{
printf("You Suck! the number is %d \n", diceRoll);
}
  continue;
}
return 0;
}
