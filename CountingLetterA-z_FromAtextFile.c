/*
  Write a program that reads a text file and counts how many times each letter from A to z occurs.have it display
  the results.(Do not Differentiate between upper-and lowercase letters.)

*/

#include<stdio.h>
#include<stdlib.h>
void myswitch(int);
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
int main()
{
   FILE *fp;
   char *ptr,str[100],check;
   int arr[10000],i,j=0;
   printf("Enter Any Sentence Below:\n");
   gets(str);
   ptr=str;
   if((fp=fopen("wordchecking.txt","w"))==NULL)
   {
       printf("Error Creating the File.\n");
       exit(1);

   }

   while(*ptr){
    if((fputc(*ptr++,fp)== EOF)){
        printf("Couldn't succefffully write on the file.\n");
       exit(1);

    }
   }
  fclose(fp);
   if((fp=fopen("wordchecking.txt","r"))==NULL)
   {
       printf("Unable to read the file.\n");
       exit(1);
   }
   while((check=fgetc(fp)) != EOF){

    myswitch(check);
   }
   myswitch(5);
   fclose(fp);
    return 0;
}


void myswitch(int check){
    int ck=check;
   switch(ck){
    case 65:
     {
      ++a;
      break;
     }
      case 66:
     {
      ++b;
      break;
     }

     case 67:
     {
      ++c;
      break;
     }

    case 68:
     {
      ++d;
      break;
     }

     case 69:
     {
      ++e;
      break;
     }

     case 70:
     {
      ++f;
      break;
     }
     case 71:
     {
      ++g;
      break;
     }
     case 72:
     {
      ++h;
      break;
     }
     case 73:
     {
      ++i;
      break;
     }
     case 74:
     {
      ++j;
      break;
     }
     case 75:
     {
      ++k;
      break;
     }
     case 76:
     {
      ++l;
      break;
     }
     case 77:
     {
      ++m;
      break;
     }
     case 78:
     {
      ++n;
      break;
     }
     case 79:
     {
      ++o;
      break;
     }
     case 80:
     {
      ++p;
      break;
     }
     case 81:
     {
      ++q;
      break;
     }
     case 82:
     {
      ++r;
      break;
     }
     case 83:
     {
      ++s;
      break;
     }
     case 84:
     {
      ++t;
      break;
     }
     case 85:
     {
      ++u;
      break;
     }
     case 86:
     {
      ++v;
      break;
     }
     case 87:
     {
      ++w;
      break;
     }
     case 88:
     {
      ++x;
      break;
     }
     case 89:
     {
      ++y;
      break;
     }
     case 90:
     {
      ++z;
      break;
     }

     case 97:
     {
      ++a;
      break;
     }
      case 98:
     {
      ++b;
      break;
     }

     case 99:
     {
      ++c;
      break;
     }

    case 100:
     {
      ++d;
      break;
     }

     case 101:
     {
      ++e;
      break;
     }

     case 102:
     {
      ++f;
      break;
     }
     case 103:
     {
      ++g;
      break;
     }
     case 104:
     {
      ++h;
      break;
     }
     case 105:
     {
      ++i;
      break;
     }
     case 106:
     {
      ++j;
      break;
     }
     case 107:
     {
      ++k;
      break;
     }
     case 108:
     {
      ++l;
      break;
     }
     case 109:
     {
      ++m;
      break;
     }
     case 110:
     {
      ++n;
      break;
     }
     case 111:
     {
      ++o;
      break;
     }
     case 112:
     {
      ++p;
      break;
     }
     case 113:
     {
      ++q;
      break;
     }
     case 114:
     {
      ++r;
      break;
     }
     case 115:
     {
      ++s;
      break;
     }
     case 116:
     {
      ++t;
      break;
     }
     case 117:
     {
      ++u;
      break;
     }
     case 118:
     {
      ++v;
      break;
     }
     case 119:
     {
      ++w;
      break;
     }
     case 120:
     {
      ++x;
      break;
     }
     case 121:
     {
      ++y;
      break;
     }
     case 122:
     {
      ++z;
      break;
     }
     case 5:
     {
         printf("Words Frequency In the File:\n");
         printf("words<->frequency\n")  ;
     printf("a/A:     %d\nb/B:     %d\nc/C:     %d\nd/D:     %d\ne/E:     %d\nf/F:     %d\ng/G:     %d\nh/H:     %d\ni/I:     %d\nj/J:     %d\nk/K:     %d\nl/L:     %d\nm/M:     %d\nn/N:     %d\no/O:     %d\np/P:     %d\nq/Q:     %d\nr/R:     %d\nt/T:     %d\nu/U:     %d\nv/V:     %d\nw/W:     %d\nx/X:     %d\ny/Y:     %d\nz/Z:     %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z) ;
      break;
     }

   }
}
