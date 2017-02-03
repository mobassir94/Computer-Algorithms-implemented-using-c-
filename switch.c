///problem : check your grade(in a particular subject) using switch case
#include<stdio.h>
int main()
{
    float mark;
    int a,b;
    printf("Input Your Mark:\n");
    scanf("%f",&mark);
     a=(int)mark;
     b=a/10;

    switch (b){
    case 10:{
     printf("A %f",mark);
     break;
    }
    case 9:{
     printf("A %f",mark);
     break;
    }
    case 8:{
      if(a>=86){
    printf("A- %f",mark);
      break;
    }else if (a>=82){
        printf("B+ %f",mark);
        break;

    }else{
    printf("B %f",mark);
    break;
    }
    }
    case 7:{
     if(a>=78){
        printf("B %f",mark);
        break;
     }else if(a>=74){
     printf("B- %f",mark);
     break;
     }else {
      printf("C+ %f",mark);
      break;
     }
    }
    case 6:{
        if(a>=66){
            printf("C %f",mark);
            break;

        }else if(a>=62){
        printf("C- %f",mark);
        break;
        }else{
        printf("D+ %f",mark);
        break;
        }
    }
   case 5:{
    if(a>=58){
        printf("D+ %f",mark);
        break;
    }  else if(a>=55){
      printf("D %f",mark);
      break;
    }else{
    printf("F %f",mark);
    break;
    }
   }
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    {
        printf("F %f",mark);
        break;
    }
  default :
    {
        printf("WRONG INPUT!!!!\n");
        break;
    }
    }
    return 0;
}
