///copy data from one file to another
#include<stdio.h>
int main()
{
    FILE *fp,*to;
   char *p,str[10000],ch;
   printf("Enter Your data/string:\n");
   gets(str);
    p=str;
   fp=fopen("sourceFILE.txt","w");
   while(*p)
   {
    fputc(*p,fp);

       p++;
   }
   fclose(fp);
   fp=fopen("sourceFILE.txt","r");
   to=fopen("destination.txt","w");
   ch=fgetc(fp);
   while(ch!=EOF)
   {
       fputc(ch,to);
       ch=fgetc(fp);
   }
   fclose(fp);
   fclose(to);
   printf("\nThe text You have Entered is just copied from source file to destination text file.\nGo and check destination file to ensure suceessfull copy.\n") ;
    return 0;
}
