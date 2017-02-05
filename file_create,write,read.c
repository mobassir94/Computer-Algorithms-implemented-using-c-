 /*
   create a file,write on the file and read back the data on console using C's "Master File System"

 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[1000];
    printf("Enter Your Message Below:\n");
    gets(str);
    FILE *fp;
    char ch,*p;
    p=str;
    if((fp=fopen("Mytext.txt","w"))==NULL){
        printf("ERROR WHILE OPENING THE FILE\n");
        exit(1);
    }
    while(*p)if(fputc(*p++,fp)==EOF){
        printf("Error Writing file.\n");
        exit(1);
    }
     fclose(fp);
    if((fp=fopen("Mytext.txt","r"))==NULL){
        printf("Can't Read the file.\n");
        exit(1);
        }
    ///read the file
    while((ch=fgetc(fp)) != EOF)putchar(ch);
    fclose(fp);

    return 0;
}
