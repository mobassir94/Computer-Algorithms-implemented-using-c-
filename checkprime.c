#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
///problem: Apply "sieve of eratosthenes" method,5th Algorithm
int N = 5000;

bool isPrime( int i ) {
//       int sqrtI = int( sqrt( (double) i) );
          int sqrtI=sqrt(i);
       int j;
         for( j = 3; j <= sqrtI; j += 2 ) {
                // j += 2 is given, condition (2)
                       if( i % j == 0 )
                        // i is divisible by j, so i is not a prime
                                    return false;
         }
           return true;
            }

int main() {
       printf("2 ");
       int i;
        // 2 is the only even prime, so, print it
          for( i = 3; i <= N; i += 2 ) {
                // i += 2 is given here, condition (1)         if( isPrime(i) == true )
                         printf("%d ", i);
          }
              return 0;
              }
