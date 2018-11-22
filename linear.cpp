#implementing linear Regression Using c/c++
#include<stdio.h>
#include<math.h>
main()
{
 int n,i;
 float sumx, sumxsq, sumy, sumxy, x, y, a0, a1, denom,sumsq,xx;
 printf("enter the n value:\n");
 scanf("%d", &n);
 printf("enter the X value:\n");
 scanf("%f", &xx);
 sumx = 0;
 sumsq = 0;
 sumy = 0;
 sumxy = 0;
 for(i = 0; i < n; i++)
 {
  scanf("%f", &x);
  scanf("%f", &y);
  sumx += x;
  sumsq += pow(x, 2);
  sumy += y;
  sumxy += (x * y);
 }

 printf("%f %f %f %f \n\n",sumx,sumsq,sumy,sumxy);
 float b ;
 b = ((n*sumxy) - (sumx*sumy))/ (n*sumsq - pow(sumx,2));
 float a;
 a = ((sumy/n) - b*(sumx/n));

 float Y;
  printf("a = %f  %f,   %f",a,b,xx);
 Y = a + (b*xx);
 printf("\ny = %f",Y);


}


