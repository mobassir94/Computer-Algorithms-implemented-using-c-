#include<stdio.h>
/*
Using a union composed of a double and a 8-byte character array,
write a function that writes a double to a disk file,a character
at a time.write another function that reads this value from the
file and reconstructs the value using the same union.
(Note : if the length of a double for your compiler isn't 8 bytes.
 use an appropriate sized character array)

*/
union test{
  double d;
  char c[8];
}a;
double read(FILE *fp,double dd);

int main()
{
    union test b;
    double scan;
    printf("Enter Any double value: ");
    scanf("%lf",&scan);
    b.d=scan;
    double s;
    int i;
    FILE *fp;
    fp=fopen("myfile.txt","wb+");
    for(i=0;i<8; i++)fputc(b.c[i],fp);
    s = read(fp,b.d);
    printf("ReaDING FROM FILE : %lf",s);
    return 0;
}


double read(FILE *Fp,double dd){
  int i;
  union test c;
  rewind(Fp); ///back to starting position of the file
  c.d=dd;
  for(i=0; i<8; i++)c.c[i]=fgetc(Fp);
  return c.d;
}
