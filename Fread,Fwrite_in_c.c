/*
write a simple program to demonstrate the use of fread,fwrite,fscanf,fprintf
in c
*/

#include<stdio.h>
#include<string.h>
int main(){
  FILE *fp;   ///declaring file pointer
  char str[100],str2[100];
 fp=fopen("d:\myfile.txt","w"); ///creating a text file in d drive/opening file in write mode
  gets(str);
  fprintf(fp,"%s",str);  ///printing inputter string(str) into file associated with fp
  fclose(fp);    ///closing file
  fp=fopen("d:\myfile.txt","r");   ///opening file in read mode
  while(fscanf(fp,"%s",str2) != EOF)
  printf("%s ",str2);///reading data from file associated with fp using fscanf
  fclose(fp);///closing the file again
  fp=fopen("d:\myfile2.txt","w");///opening another file in write mode
 fwrite(str,1 ,strlen(str),fp);///writing string(str) into file associated with fp

  fclose(fp);///closing the file
 fp=fopen("d:\myfile2.txt","r");///opening last file in read mode
 fread(str2,1,strlen(str),fp);///reading last file using fread
  fclose(fp); ///closing the file
  printf(str2);  ///printing the string copied to str2 from str using fread
return 0;
}
