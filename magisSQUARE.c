#include<stdio.h>

void magicsquare(int n)
{
  int matrix[100][100];

  int nsqr = n * n;
  int i=0, j=n/2,k;     // starting position

  for (k=1; k<=nsqr; ++k)
  {
    matrix[i][j] = k;

   --i,++j;///for going up and diagonally

    if (k%n == 0)
    {
      i += 2;
      --j;
    }
    else
    {
      if (j==n)
        j -= n;
      else if (i<0)
        i += n;
    }
  }
  printf("Printing Magic square:\n\n") ;

  for(i=0; i<n; i++){
        printf("\t");
    for(j=0; j<n; j++){
            printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }

}
int main(){

 int n;
 printf("Enter the input of row/column for magic square (odd number):\n");
 scanf("%d",&n);
 if(n%2== 0){
    printf("this program prints magic square for odd numbers,you have entered an even number,sry\n");
    exit(1);
 }
 magicsquare(n);
return 0;
}
